# AsyncHelper Plugin - Complete Blueprint Usage Guide

## Overview
The AsyncHelper plugin provides powerful async task management for Unreal Engine 5.6 with full Blueprint support. This guide covers every possible Blueprint usage scenario.

## Table of Contents
1. [Basic Async Delay](#basic-async-delay)
2. [Async Delay with Cancellation](#async-delay-with-cancellation)
3. [Task Chaining](#task-chaining)
4. [Timeout Support](#timeout-support)
5. [Batch Operations](#batch-operations)
6. [Task Management](#task-management)
7. [Performance Monitoring](#performance-monitoring)
8. [Common Patterns](#common-patterns)
9. [Best Practices](#best-practices)
10. [Troubleshooting](#troubleshooting)

---

## 1. Basic Async Delay

### Simple Delay Execution
**Node:** `Async Delay`
**Purpose:** Execute something after a specified delay without blocking the game thread.

**Blueprint Setup:**
1. Add "Async Delay" node from Async Helper category
2. Set "Delay Seconds" (e.g., 2.0)
3. Set "Task Name" (optional, for debugging)
4. Connect "OnCompleted" output to your logic

**Example Use Cases:**
- Delayed UI animations
- Timed gameplay events
- Loading screen delays
- Cooldown timers

**Parameters:**
- `Delay Seconds` (float): How long to wait before execution
- `Task Name` (string): Optional name for debugging

**Output Events:**
- `OnCompleted`: Fired when delay finishes
- `OnCancelled`: Fired if task was cancelled

---

## 2. Async Delay with Cancellation

### Cancellable Delay
**Node:** `Async Delay` + `Cancel Async Task`
**Purpose:** Create delays that can be cancelled before completion.

**Blueprint Setup:**
1. Add "Async Delay" node
2. Store the returned "Task Handle"
3. Use "Cancel Async Task" with the stored handle when needed

**Example Use Cases:**
- Interruptible animations
- Cancellable loading operations
- User-cancellable timers
- Conditional delays

**Cancellation Methods:**
- `Cancel Async Task`: Cancel specific task by handle
- `Cancel All Async Tasks`: Cancel all running tasks

---

## 3. Task Chaining

### Sequential Task Execution
**Node:** `Async Task Chain`
**Purpose:** Execute multiple tasks in sequence with optional delays between them.

**Blueprint Setup:**
1. Add "Async Task Chain" node
2. Create an array of task indices (e.g., [0, 1, 2, 3])
3. Set "Delay Between Tasks" (optional)
4. Set "Stop On Failure" (true/false)
5. Connect output events

**Parameters:**
- `Task Indices` (Array of Integers): Sequence of task IDs to execute
- `Delay Between Tasks` (float): Wait time between each task
- `Stop On Failure` (bool): Whether to stop chain if any task fails
- `Task Name` (string): Optional name for debugging

**Output Events:**
- `OnTaskExecuted`: Fired for each task completion (provides task index)
- `OnCompleted`: Fired when entire chain completes
- `OnCancelled`: Fired if chain was cancelled

**Example Use Cases:**
- Sequential animations (fade out → move → fade in)
- Multi-step loading processes
- Tutorial sequences
- Cutscene events

**Blueprint Pattern:**
```
Task Chain [0,1,2,3] → OnTaskExecuted → Switch on Int (Task Index)
                    → OnCompleted → Final Action
```

---

## 4. Timeout Support

### Async Operations with Timeout
**Node:** `Async Delay With Timeout`
**Purpose:** Execute async operations with automatic timeout to prevent hanging.

**Blueprint Setup:**
1. Add "Async Delay With Timeout" node
2. Set "Delay Seconds" (normal execution time)
3. Set "Timeout Seconds" (maximum allowed time)
4. Connect both completion and timeout events

**Parameters:**
- `Delay Seconds` (float): Normal execution delay
- `Timeout Seconds` (float): Maximum time before timeout
- `Task Name` (string): Optional name for debugging

**Output Events:**
- `OnCompleted`: Fired when task completes normally
- `OnTimedOut`: Fired when task exceeds timeout
- `OnCancelled`: Fired if task was cancelled

**Example Use Cases:**
- Network requests with timeout
- File loading operations
- Server connection attempts
- User input waiting

**Blueprint Pattern:**
```
Async Delay With Timeout → OnCompleted → Success Logic
                        → OnTimedOut → Error Handling
                        → OnCancelled → Cleanup
```

---

## 5. Batch Operations

### Parallel Task Execution
**Node:** `Execute Async Batch`
**Purpose:** Run multiple tasks in parallel and wait for all to complete.

**Blueprint Setup:**
1. Add "Execute Async Batch" node
2. Set "Task Count" (number of parallel tasks)
3. Set "Timeout Seconds" (optional, 0 = no timeout)
4. Connect batch delegate to handle each task

**Parameters:**
- `Task Count` (int): Number of tasks to execute in parallel
- `Timeout Seconds` (float): Maximum time for all tasks (0 = no timeout)
- `Task Name` (string): Optional name for debugging

**Output Events:**
- `OnCompleted`: Fired when all tasks complete
- `OnCancelled`: Fired if batch was cancelled

**Example Use Cases:**
- Parallel asset loading
- Multiple network requests
- Concurrent calculations
- Multi-threaded operations

---

## 6. Task Management

### Monitoring and Control
**Nodes:** Various task management functions

#### Check Task Status
**Node:** `Is Async Task Running`
- Input: Task Handle
- Output: Boolean (true if still running)

#### Get Task Information
**Node:** `Get Async Task Info`
- Input: Task Handle
- Output: Task Info struct (name, duration, status, etc.)

#### Get Running Task Count
**Node:** `Get Running Task Count`
- Output: Integer (number of currently active tasks)

#### Cancel Operations
**Node:** `Cancel Async Task`
- Input: Task Handle
- Output: Boolean (true if successfully cancelled)

**Node:** `Cancel All Async Tasks`
- Cancels all currently running async tasks

---

## 7. Performance Monitoring

### Statistics and Debugging
**Node:** `Get Performance Stats`
**Purpose:** Monitor async operation performance and usage.

**Output Information:**
- Total tasks created
- Total tasks completed
- Total tasks cancelled
- Currently running tasks
- Average execution time
- Total execution time

**Blueprint Usage:**
```
Get Performance Stats → Print String (for debugging)
                     → Display on UI (for monitoring)
```

---

## 8. Common Patterns

### Pattern 1: Loading Screen with Progress
```
1. Start loading tasks with Async Batch
2. Use OnTaskExecuted to update progress bar
3. Use OnCompleted to hide loading screen
4. Use OnTimedOut for error handling
```

### Pattern 2: Sequential Animation Chain
```
1. Create task chain [FadeOut, Move, Scale, FadeIn]
2. Use OnTaskExecuted with Switch to trigger each animation
3. Set delays between tasks for smooth transitions
```

### Pattern 3: Timed User Input
```
1. Use Async Delay With Timeout for input window
2. OnCompleted = user provided input in time
3. OnTimedOut = proceed with default action
```

### Pattern 4: Cancellable Operations
```
1. Store task handle from async operation
2. Bind Cancel button to Cancel Async Task
3. Handle OnCancelled event for cleanup
```

---

## 9. Best Practices

### Performance
- Use meaningful task names for debugging
- Cancel unnecessary tasks to free resources
- Monitor performance stats in development
- Avoid creating too many concurrent tasks

### Error Handling
- Always handle OnCancelled events
- Use timeout for operations that might hang
- Implement fallback logic for failed operations
- Log important async operations

### Blueprint Organization
- Group related async operations
- Use comments to document complex chains
- Store task handles in variables when needed
- Clean up references when objects are destroyed

### Memory Management
- The plugin automatically cleans up completed tasks
- Cancel tasks when switching levels/maps
- Don't store task handles longer than necessary

---

## 10. Troubleshooting

### Common Issues

#### Task Not Executing
- Check if AsyncHelper subsystem is available
- Verify task parameters are valid (positive delays, etc.)
- Ensure OnCompleted event is properly connected

#### Tasks Running Forever
- Use timeout support for operations that might hang
- Check for infinite loops in task logic
- Monitor running task count

#### Performance Issues
- Reduce number of concurrent tasks
- Increase cleanup interval in settings
- Use batch operations instead of many individual tasks

#### Blueprint Compilation Errors
- Ensure all async nodes have proper connections
- Check that task handles are properly typed
- Verify delegate connections are correct

### Debug Commands
- Use "Get Performance Stats" to monitor usage
- Check "Get Running Task Count" for active tasks
- Use meaningful task names for easier debugging
- Enable detailed logging in plugin settings

---

## Settings Configuration

Access plugin settings through:
**Edit → Project Settings → Plugins → Async Helper**

Key settings for Blueprint users:
- `Max Concurrent Tasks`: Limit parallel operations
- `Cleanup Interval`: How often to clean completed tasks
- `Enable Performance Stats`: Track usage statistics
- `Enable Detailed Logging`: Verbose debug output

---

## Quick Reference

| Operation | Node Name | Use Case |
|-----------|-----------|----------|
| Simple delay | Async Delay | Basic timed events |
| Cancellable delay | Async Delay + Cancel | Interruptible operations |
| Sequential tasks | Async Task Chain | Step-by-step processes |
| Timed operations | Async Delay With Timeout | Operations that might hang |
| Parallel tasks | Execute Async Batch | Multiple simultaneous operations |
| Task monitoring | Get Async Task Info | Status checking |
| Performance | Get Performance Stats | Usage monitoring |

This guide covers all Blueprint functionality in the AsyncHelper plugin. For advanced C++ usage, refer to the source code documentation.
