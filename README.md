# AsyncHelper Plugin for Unreal Engine 5.6

A comprehensive async task management plugin designed for Blueprint-first development with advanced task chaining, timeout support, and performance optimization.

## 🚀 Features

### Core Functionality
- **Async Delay Functions**: Execute callbacks after specified delays without blocking
- **Advanced Task Chaining**: Sequential execution with flexible control and progress tracking
- **Timeout Support**: Prevent hanging operations with automatic timeout handling
- **Batch Operations**: Execute multiple tasks in parallel with completion tracking
- **Task Cancellation**: Cancel individual tasks or all running operations
- **Performance Monitoring**: Built-in statistics and performance tracking

### Blueprint Integration
- **Complete Blueprint Support**: All functionality available through Blueprint nodes
- **Async Action Nodes**: Proper Blueprint async nodes with event outputs
- **Easy-to-Use Interface**: Drag-and-drop async operations
- **Visual Task Management**: Monitor and control tasks through Blueprint
- **Event-Driven Architecture**: Clean separation of concerns with delegates

### Technical Excellence
- **UE5.6 Best Practices**: Built using modern UE5 async task system
- **Thread Safety**: All operations are thread-safe and performant
- **Memory Management**: Automatic cleanup with configurable retention
- **Configurable Settings**: Fine-tune performance through Project Settings
- **Comprehensive Logging**: Detailed debug information when needed

## 📖 Documentation

### For Blueprint Users
**[📘 Complete Blueprint Usage Guide](BLUEPRINT_USAGE_GUIDE.md)**
- Comprehensive guide covering every Blueprint node
- Step-by-step examples and patterns
- Best practices and troubleshooting
- Common use cases and workflows

### Quick Start (Blueprint)
1. Enable the AsyncHelper plugin
2. In Blueprint, search for "Async Helper" nodes
3. Use "Async Delay" for basic delayed execution
4. Use "Async Task Chain" for sequential operations
5. Use "Async Delay With Timeout" for operations that might hang

## 🎯 Common Use Cases

### Game Development
- **Loading Screens**: Async loading with progress tracking
- **Animations**: Sequential animation chains with delays
- **UI Transitions**: Smooth, non-blocking interface changes
- **Gameplay Timers**: Cooldowns, delays, and timed events
- **Cutscenes**: Scripted sequences with precise timing

### System Operations
- **File I/O**: Non-blocking file operations with timeout
- **Network Requests**: Async networking with timeout handling
- **Asset Loading**: Parallel asset loading with progress
- **Database Operations**: Async queries with timeout protection
- **User Input**: Timed input windows with fallbacks

## 🔧 Installation

1. Copy the AsyncHelper folder to your project's `Plugins` directory
2. Add the plugin to your `.uproject` file:
   ```json
   {
     "Name": "AsyncHelper",
     "Enabled": true
   }
   ```
3. Regenerate project files
4. Compile your project
5. Enable the plugin in the Plugin Browser

## ⚙️ Configuration

Access settings through: **Edit → Project Settings → Plugins → Async Helper**

### Key Settings
- **Max Concurrent Tasks**: Control memory usage and performance
- **Cleanup Interval**: Balance between memory usage and CPU overhead
- **Task Info Retention Time**: How long to keep completed task information
- **Enable Performance Stats**: Track usage for optimization
- **Enable Detailed Logging**: Verbose debug output for development

## 🎮 Blueprint Nodes Reference

### Basic Operations
- `Async Delay`: Simple delayed execution
- `Cancel Async Task`: Cancel specific task
- `Cancel All Async Tasks`: Cancel all running tasks
- `Is Async Task Running`: Check task status

### Advanced Operations
- `Async Task Chain`: Sequential task execution
- `Async Delay With Timeout`: Timeout-protected operations
- `Execute Async Batch`: Parallel task execution

### Monitoring
- `Get Async Task Info`: Detailed task information
- `Get Running Task Count`: Active task monitoring
- `Get Performance Stats`: Usage statistics
- `Is Async Helper Available`: System availability check

## 💡 Example Workflows

### Loading Screen with Progress
```
1. Execute Async Batch (for parallel loading)
2. Connect OnTaskExecuted to update progress bar
3. Connect OnCompleted to hide loading screen
4. Connect OnTimedOut for error handling
```

### Sequential Animation Chain
```
1. Async Task Chain with indices [0,1,2,3]
2. OnTaskExecuted → Switch on Int → Trigger specific animation
3. Set delay between tasks for smooth transitions
4. OnCompleted → Final state
```

### Timed User Input
```
1. Async Delay With Timeout (input window)
2. OnCompleted → User provided input in time
3. OnTimedOut → Proceed with default action
4. OnCancelled → Handle interruption
```

## 🏗️ Architecture

### Core Components
- **UAsyncHelperSubsystem**: Game Instance Subsystem managing all operations
- **UAsyncTaskManager**: Core task execution and management
- **UAsyncDelayAction**: Blueprint async action for delays
- **UAsyncTaskChainAction**: Blueprint async action for task chains
- **UAsyncTimeoutAction**: Blueprint async action for timeout operations
- **UAsyncHelperBlueprintLibrary**: Static function library for easy access
- **UAsyncHelperSettings**: Configurable plugin settings

### Task Types
- **Simple Delay**: Basic timed execution
- **Delay with Result**: Execution with success/failure feedback
- **Task Chain**: Sequential execution with progress tracking
- **Timeout Operations**: Time-limited execution with fallback
- **Batch Operations**: Parallel execution with completion tracking

## 🔍 Performance Considerations

### Optimization Tips
- Use meaningful task names for debugging
- Cancel unnecessary tasks to free resources
- Monitor performance stats during development
- Configure cleanup intervals based on usage patterns
- Use batch operations for multiple parallel tasks

### Memory Management
- Automatic cleanup of completed tasks
- Configurable retention time for task information
- Efficient shared pointer usage for task data
- Thread-safe operations with minimal overhead

## 🐛 Troubleshooting

### Common Issues
- **Tasks not executing**: Check AsyncHelper subsystem availability
- **Performance issues**: Reduce concurrent task count or adjust cleanup interval
- **Memory usage**: Lower task retention time or increase cleanup frequency
- **Blueprint errors**: Ensure proper event connections and valid parameters

### Debug Tools
- Enable detailed logging in plugin settings
- Use "Get Performance Stats" for usage monitoring
- Check "Get Running Task Count" for active operations
- Use meaningful task names for easier identification

## 📋 Requirements

- **Unreal Engine**: 5.6 or later
- **Platforms**: All platforms supported by UE5
- **Dependencies**: Core, CoreUObject, Engine
- **Build Tools**: Visual Studio 2022 (Windows)

## 📄 License

This plugin follows your project's licensing terms.

## 🤝 Support

For issues, questions, or feature requests:
1. Check the Blueprint Usage Guide for detailed examples
2. Review troubleshooting section for common issues
3. Enable detailed logging for debugging information
4. Monitor performance stats for optimization guidance

---

**Ready to use in production!** 🎉

The AsyncHelper plugin provides everything you need for sophisticated async operations in Blueprint, from simple delays to complex task chains with timeout handling. Perfect for creating responsive, non-blocking gameplay experiences.
