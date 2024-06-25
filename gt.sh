cd ~/42/
sudo chmod -R 777 *
find . -type f -name '*.out' -delete
find . -type f -name '*.exe' -delete
git add .
git commit -m "$RANDOM"
git push