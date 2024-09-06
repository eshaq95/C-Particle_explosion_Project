# Particle Fire Simulation

## Description

This project is a visually engaging C++ program that simulates a dynamic particle system using the SDL2 library. The simulation creates a window where virtual particles appear, move in patterns, and gradually change colors. A blurring effect has been implemented to create a more complex and aesthetically pleasing visual experience.

## Features

- Dynamic particle movement and color changes
- Circular pattern formation
- Blurring effect for enhanced visuals
- SDL2-based graphics rendering

## Visual Demo

<img src="https://user-images.githubusercontent.com/72145252/131324596-d5ded45f-2c36-45e1-8b56-a41fc3f58125.png" width="32%" height="200"> <img src="https://user-images.githubusercontent.com/72145252/131324924-aec6ddfb-a0d0-4119-82be-41fcd9e881d3.png" width="32%" height="200"> <img src="https://user-images.githubusercontent.com/72145252/131325033-04f2b299-2b35-4c88-ab4f-0390104f4faa.png" width="32%" height="200">

For video demonstrations, please see:
- [Demo Video 1](https://user-images.githubusercontent.com/72145252/130369205-623f340f-d971-4ded-b6f1-0fa5f7b12e83.mp4)
- [Demo Video 2](https://user-images.githubusercontent.com/72145252/130426072-4887af16-fb58-4f77-acfe-7a1416fc37b5.mp4)

## Technical Details

- **Language:** C++
- **Graphics Library:** SDL2 (Version 2.0.16)
- **Compiler:** MinGW on Eclipse
- **System Type:** x64
- **Subsystem:** Windows application (runs without console)

## Project Structure

The project consists of the following main components:

1. `main.cpp`: Entry point and main program loop
2. `Particle.cpp` and `Particle.h`: Define individual particle behavior
3. `Screen.cpp` and `Screen.h`: Handle SDL initialization and rendering
4. `Swarm.cpp` and `Swarm.h`: Manage the collection of particles

## Building and Running

1. Ensure you have MinGW and SDL2 installed on your system.
2. Clone this repository.
3. Open the project in Eclipse or your preferred C++ IDE.
4. Build the project using the IDE's build tools.
5. Run the compiled executable.

## Learning Resources

This project was developed as part of the "C++ Tutorial for Complete Beginners" course on Udemy. For more information about the course, visit [C++ Tutorial for Complete Beginners](http://example.com).

## Contributing

Contributions to improve the simulation or add new features are welcome. Please feel free to fork the repository and submit pull requests.


## Acknowledgements

- SDL2 Development Team
- Udemy and the instructor of "C++ Tutorial for Complete Beginners"
