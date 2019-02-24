#!/bin/csh -f

rm -f plb.log plb.pdf plbNotes.bib plb.dvi plb.aux plb.bbl plb.blg

pdflatex plb.tex
bibtex plb
pdflatex plb.tex
pdflatex plb.tex

rm -f plb.log plbNotes.bib plb.dvi plb.aux plb.bbl plb.blg
