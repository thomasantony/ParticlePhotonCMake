# blink

A Particle project named blink. Builds on ideas from https://github.com/ashtuchkin/vive-diy-position-sensor

## Dependencies

Ensure that firmware v0.7.0 is flashed on the Photon.
Install dependencies using homebrew.

```
brew install ./gcc-arm-none-eabi-53.rb
brew install dfu-util
```

## Build
```
mkdir build && cd build
cmake ..
make firmware-upload
```
