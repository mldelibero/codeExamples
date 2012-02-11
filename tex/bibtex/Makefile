file = myart
all:
	pdflatex $(file).tex
	bibtex $(file)
	pdflatex $(file).tex
	pdflatex $(file).tex

clean:
	rm -rf *.aux *.log *.blg
