fake-stream-processing-playground
=================================
### TODOs
- [ ] **Add support to loop intervals**
  - based on input file's sample rate
  - fake a hard loop intervals (real-time system)
  - allowing adjustments (sometimes slower / faster)
  - unconstant interval (e.g. undeterministic / noisy system)
- [ ] May be useless: Simulate interrupt (use multi-threading)
- [ ] plotting
- [ ] reporting
- [ ] lookahead (the ability to anticipate incoming signals)

### Input interface
- .wave audio (PCM)
- serial
  - kermit
    - [串口工具Kermit_sudo kermit-CSDN博客](https://blog.csdn.net/u013029731/article/details/88877350)
- [q/q_io at master · cycfi/q](https://github.com/cycfi/q/tree/master/q_io)

### What to do
- Mel-Spectrogram, MFCC
- Headless audio effects
- FFT
  - [jj's useful and ugly FFT page](https://jjj.de/fft/fftpage.html)
- syntax-highlighting testing
  - read text by character, one-by-one
- Circuit analysis
    - Opamp feedback
