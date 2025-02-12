# Navigate to the project directory
Set-Location -Path "C:/Users/Swann/TP/TP_CPP/TP_CPP/TP2"

# Create a build directory if it doesn't exist
if (-Not (Test-Path -Path "build")) {
    New-Item -ItemType Directory -Path "build"
}

# Navigate to the build directory
Set-Location -Path "build"

# Run CMake to generate build files
cmake ..

# Build the project
cmake --build .

# Navigate to the directory where the .exe is located
Set-Location -Path "C:/Users/Swann/TP/TP_CPP/TP_CPP/TP2/build/Debug"