cd src
make
sudo ./load
cd ../tests
make
sudo ./test-booga 0 100 read
sudo ./test-booga 1 100 read
sudo ./test-booga 2 100 read
sudo ./test-booga 3 100 read
sudo ./test-booga 0 100 write
sudo ./test-booga 1 100 write
sudo ./test-booga 2 100 write
sudo ./test-booga 3 100 write

sudo ./test-sigterm

cd ../src
sudo ./unload
