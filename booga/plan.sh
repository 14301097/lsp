cd src
make
sudo ./load
cd ../test
make
sudo ./test-booga 0 256 read
sudo ./test-booga 1 256 read
sudo ./test-booga 2 256 read
sudo ./test-booga 3 256 read
sudo ./test-booga 0 256 write
sudo ./test-booga 1 256 write
sudo ./test-booga 2 256 write
sudo ./test-booga 3 256 write

sudo ./test-sigterm

cd ../src
sudo ./unload
