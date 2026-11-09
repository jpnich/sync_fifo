# Overview
I designed a very simple Verilog FIFO (which also comes with a C++ reference I made) that has a parameterised depth, so that I can explore the effect of scaling through OpenLane's RTL-to-GDSII design flow (Yosys, OpenROAD, Magic/KLayout, Netgen) on the SkyWater 130nm PDK. Collecting DRC, LVS, STA, antenna and layout logs through KLayout, I was able to evaluate physical layout changes as I increased FIFO depth across 7 depths from 4 to 256. KLayout also provided a very visual way of observing the increase in rating complexity as the depth scaled. 

## KLayout Routing for Depth 4
<img width="788" height="868" alt="4-deep-layout" src="https://github.com/user-attachments/assets/e800b163-e81e-4b82-bc20-3f50faf3f3fc" />

## KLayout Routing for Depth 128
<img width="777" height="859" alt="128-deep-layout" src="https://github.com/user-attachments/assets/17d57ff9-7a03-44be-8bf0-06c98703f87f" />

## Results Table for a Selection of Interested Metrics
<img width="1657" height="162" alt="Screenshot 2026-11-07 200947" src="https://github.com/user-attachments/assets/0a90c9d4-ba83-44f4-9891-a91236b7c99c" />


## Evaluation
### PPA Observations

### Timing Observations
