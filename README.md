# Prusa i3 MK3 Chain Production add-on
![assembly iso render](img/assembly-iso-render.png "[assembly iso render")
Add chain production capability to your Prusa i3

# How it works
- The arduino controls the steppers & fans
- The printer is controlled via octopi
- A [script](octoprint-plugin/main.py) on the octopi monitors the octoprint status and controls the arduino via usb-serial to start cooling and trigger the ejection

# Demo video
[![YT](https://img.youtube.com/vi/xZeJeUdq0wY/0.jpg)](https://www.youtube.com/watch?v=xZeJeUdq0wY)

# Assembly Bill of materials
Most of the parts can be ordered on Aliexpress at a small cost, for a total of approx $100

