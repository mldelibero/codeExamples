file = tutorial
all:
	latex $(file).tex
	dvips $(file) -o $(file).ps
	ps2pdf $(file).ps
	rm $(file).aux $(file).ps $(file).dvi $(file).log $(file).toc
	open $(file).pdf
