#! /bin/bash
sudo proxychains apt-get update
sudo proxychains apt-get install git libuv1-dev libssl-dev gcc g++ cmake make
proxychains git clone https://github.com/uWebSockets/uWebSockets 
cd uWebSockets
git checkout e94b6e1
mkdir build
cd build
cmake ..
make 
sudo make install
cd ../..
sudo ln -s /usr/lib64/libuWS.so /usr/lib/libuWS.so
sudo rm -r uWebSockets
