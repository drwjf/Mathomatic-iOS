#!/bin/sh
# Make forward order changelog in "NEWS" file:
set -e
tac -r -s "^Mathomatic version.*$" changes.txt | head -n -9 >NEWS.tmp
echo >>NEWS.tmp
echo ---------------------------------------------------------------------- >>NEWS.tmp
echo End of this version history of the Mathomatic computer algebra system. >>NEWS.tmp
echo Current as of `date '+%D'` \(`date '+%F'`\). >>NEWS.tmp
echo The latest changes are at the beginning of this file. >>NEWS.tmp
echo This file is available at http://mathomatic.org/NEWS >>NEWS.tmp
echo Written and maintained by George Gesslein II. >>NEWS.tmp
mv NEWS.tmp NEWS
