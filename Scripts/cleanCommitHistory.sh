git checkout --orphan temp;
git add -A;
git commit -am "JC";
git branch -D main;
git branch -m main;
git push -f origin main;
