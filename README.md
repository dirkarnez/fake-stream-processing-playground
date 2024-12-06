fake-stream-processing-playground
=================================
### TODOs
- [ ] **Add support to loop intervals**
  - based on input file's sample rate
  - fake a hard loop intervals (real-time system)
  - allowing adjustments (sometimes slower / faster)
  - unconstant interval (e.g. undeterministic / noisy system)
- [ ] May be useless: Simulate interrupt (use multi-threading)
- [ ] reporting
- [ ] lookahead (the ability to anticipate incoming signals)
- [ ] different stream styles
  - [ ] plain main while true
  - [ ] setup loop (https://github.com/arduino/ArduinoCore-avr/blob/master/cores/arduino/main.cpp)
  - [ ] vst3 process signature `process (Vst::ProcessData& data)`
    - https://github.com/steinbergmedia/vst3_example_plugin_hello_world/blob/main/source/helloworldprocessor.cpp#L67
- [ ] Super advanced: this repo should make room for embeded programming so the user code can switch to embedded toolchains seamlessly

### Input interface
- .wave audio (PCM)
- serial
  - kermit
    - [串口工具Kermit_sudo kermit-CSDN博客](https://blog.csdn.net/u013029731/article/details/88877350)
  - https://github.com/stm32duino/stm32flash/blob/main/serial_w32.c#L193
- [q/q_io at master · cycfi/q](https://github.com/cycfi/q/tree/master/q_io)

### Output interface
- audio stream
- file (.wave, etc)
- plotting

### What to do
- Mel-Spectrogram, MFCC
- Headless audio effects
- FFT
  - [jj's useful and ugly FFT page](https://jjj.de/fft/fftpage.html)
- syntax-highlighting testing
  - read text by character, one-by-one
- Circuit analysis
    - Opamp feedback
- Control systems
  - feedback loop (PID)
- Music theory
  - parallel fifths / octaves checking
  - SATB
  - voicing
  - Counterpoint
