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

### Input interface
- .wave audio (PCM)

### What to do
- Mel-Spectrogram, MFCC
- Headless audio effects
- FFT
  - [jj's useful and ugly FFT page](https://jjj.de/fft/fftpage.html)
- syntax-highlighting testing
  - read text by character, one-by-one
- Circuit analysis
    - Opamp feedback
