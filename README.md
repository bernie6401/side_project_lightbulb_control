# side_project_lightbulb_control

## Project Purpose
* In order to deal with the inconvenient experiment on lightbulb of bathroom, I decided to write some code and implent the circuit. Specifically speaking about the inconvenient, I wish exhaust fan in bathroom can always work without switch control it. But unfortunately, it has connected with lightbulb circuit at the beginning, and the circuit hided in the wall that I can't change the circuit directly.
* The original circuit diagram is as bottom left and the revise circuit diagram v1 is as bottom right
<img src="./img/origin_circuit.png" alt="origin_circuit" style="zoom: 50%;" /><img src="./img/rev_v1_circuit.png" alt="rev_v1_circuit" style="zoom: 50%;" />


## Arduino Circuit Diagram
* Version 1
	![arduino_circuit_diagram](./img/arduino_circuit_diagram.png)
	* As the circuit above, when IR remote sensor received *any* infrared, it'll illuminate LED just like a demo that it connect with an actual lightbulb.
	* Cons:
		1. It must carry a mobile charger. And like I said, the circuit of the lightbulb hide in the wall, so the volume is too big to hide on the roof.
		2. The portable charger must replace regularly and that is much more unconvenient.
		3. Use IR remote sensor to control is not intuitive. When you'd like to turn on a lightbulb, you must find a remote controller first? That is not good obviously.


## Reference
* [Relay1](http://a-chien.blogspot.com/2016/07/arduino_7.html)
* [Relay2](https://blog.jmaker.com.tw/arduino-relay/)
* [Relay3](https://crazymaker.com.tw/arduino-how-to-use-relay/)
* [Relay4](https://www.youtube.com/watch?v=8ULB8-CvbbE)
* [IRRemote1](https://blog.xuite.net/aminyeh0825/blog/589725602#)
* [IRRemote2](https://www.youtube.com/watch?v=5bfJTu5tekY&t=663s)
* [WIFI1](https://www.youtube.com/watch?v=q-14MtNWltg)