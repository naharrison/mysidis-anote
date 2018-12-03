#!/bin/csh -f

rm -f prb.log prb.pdf prbNotes.bib prb.dvi prb.aux prb.bbl prb.blg

pdflatex prb.tex
bibtex prb
pdflatex prb.tex
pdflatex prb.tex

rm -f prb.log prbNotes.bib prb.dvi prb.aux prb.bbl prb.blg
