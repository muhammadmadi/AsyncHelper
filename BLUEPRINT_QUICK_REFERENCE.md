# AsyncHelper - Blueprint Quick Reference Card

## 🎯 Essential Nodes

### Basic Async Operations
| Node | Purpose | Key Inputs | Key Outputs |
|------|---------|------------|-------------|
| `Async Delay` | Simple delay | Delay Seconds, Task Name | OnCompleted, OnCancelled |
| `Cancel Async Task` | Cancel specific task | Task Handle | Success (bool) |
| `Cancel All Async Tasks` | Cancel all tasks | None | None |

### Advanced Operations
| Node | Purpose | Key Inputs | Key Outputs |
|------|---------|------------|-------------|
| `Async Task Chain` | Sequential tasks | Task Indices, Delay Between | OnTaskExecuted, OnCompleted |
| `Async Delay With Timeout` | Timeout protection | Delay, Timeout Seconds | OnCompleted, OnTimedOut |
| `Execute Async Batch` | Parallel tasks | Task Count, Timeout | OnCompleted, OnCancelled |

### Monitoring & Info
| Node | Purpose | Key Inputs | Key Outputs |
|------|---------|------------|-------------|
| `Is Async Task Running` | Check status | Task Handle | Is Running (bool) |
| `Get Async Task Info` | Task details | Task Handle | Task Info struct |
| `Get Running Task Count` | Active tasks | None | Count (int) |
| `Get Performance Stats` | Usage stats | None | Stats (string) |

## 🔄 Common Patterns

### Pattern 1: Simple Delay
```
Event → Async Delay (2.0s) → OnCompleted → Your Action
```

### Pattern 2: Cancellable Timer
```
Start Event → Async Delay → Store Task Handle
Cancel Event → Cancel Async Task (Handle) → Cleanup
```

### Pattern 3: Task Chain
```
Start → Async Task Chain [0,1,2,3] → OnTaskExecuted → Switch on Int
                                  → OnCompleted → Final Action
```

### Pattern 4: Timeout Protection
```
Start → Async Delay With Timeout → OnCompleted → Success Path
                                 → OnTimedOut → Error Path
```

### Pattern 5: Parallel Loading
```
Start → Execute Async Batch → OnCompleted → All Done
                           → OnCancelled → Handle Cancel
```

## ⚡ Quick Setup Steps

### 1. Basic Delay
1. Add "Async Delay" node
2. Set delay time (e.g., 2.0)
3. Connect OnCompleted to your logic

### 2. Task Chain
1. Add "Async Task Chain" node
2. Create array [0,1,2,3] for Task Indices
3. Set delay between tasks (optional)
4. Connect OnTaskExecuted to Switch node
5. Use task index to trigger specific actions

### 3. Timeout Operation
1. Add "Async Delay With Timeout" node
2. Set normal delay time
3. Set maximum timeout time
4. Connect both OnCompleted and OnTimedOut

### 4. Batch Processing
1. Add "Execute Async Batch" node
2. Set number of parallel tasks
3. Connect delegate to handle each task
4. Connect OnCompleted for finish

## 🎮 Use Case Examples

### Loading Screen
```
Start Loading → Execute Async Batch (10 tasks)
             → OnTaskExecuted → Update Progress Bar
             → OnCompleted → Hide Loading Screen
```

### Animation Sequence
```
Start → Async Task Chain [FadeOut, Move, Scale, FadeIn]
     → OnTaskExecuted → Switch → Trigger Animation
     → OnCompleted → Sequence Done
```

### User Input Timer
```
Show Prompt → Async Delay With Timeout (10s)
           → OnCompleted → User Responded
           → OnTimedOut → Use Default
```

### Cooldown System
```
Use Ability → Async Delay (Cooldown Time)
           → OnCompleted → Enable Ability
           → Store Handle for Cancel if needed
```

## 🔧 Settings Quick Access

**Path:** Edit → Project Settings → Plugins → Async Helper

**Key Settings:**
- Max Concurrent Tasks: 100 (default)
- Cleanup Interval: 30s (default)
- Enable Performance Stats: True
- Enable Detailed Logging: False (enable for debug)

## 🐛 Quick Troubleshooting

### Task Not Running?
- Check if delay is positive
- Verify OnCompleted is connected
- Ensure AsyncHelper is available

### Performance Issues?
- Check running task count
- Reduce concurrent tasks
- Increase cleanup interval

### Memory Usage High?
- Lower task retention time
- Cancel unnecessary tasks
- Check for task leaks

## 📊 Debug Commands

### Monitor Usage
```
Get Performance Stats → Print String
Get Running Task Count → Print String
```

### Check Specific Task
```
Is Async Task Running (Handle) → Branch → Handle Result
Get Async Task Info (Handle) → Print Task Details
```

## 💡 Pro Tips

### Performance
- Use meaningful task names for debugging
- Cancel tasks when switching levels
- Monitor stats during development
- Group related operations in batches

### Blueprint Organization
- Store task handles in variables when needed
- Use comments for complex chains
- Group async nodes in collapsed graphs
- Handle all output events (including OnCancelled)

### Error Handling
- Always connect OnCancelled events
- Use timeout for operations that might hang
- Implement fallback logic
- Log important operations

## 🎯 Node Categories in Blueprint

**Search Terms:**
- "Async Helper" - All plugin nodes
- "Async Delay" - Basic delay operations
- "Async Task" - Task management
- "Async Chain" - Sequential operations
- "Async Timeout" - Timeout operations
- "Async Batch" - Parallel operations

**Categories:**
- Async Helper (main category)
- Utilities (helper functions)
- Development (debug/monitoring)

---

**Keep this reference handy while working with AsyncHelper in Blueprint!** 📌
