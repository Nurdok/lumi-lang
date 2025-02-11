# -*- coding: utf-8 -*-
#
# Configuration file for the Sphinx documentation builder.
#
# This file does only contain a selection of the most common options. For a
# full list see the documentation:
# http://www.sphinx-doc.org/en/stable/config

# -- Path setup --------------------------------------------------------------

# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
# import os
# import sys
# sys.path.insert(0, os.path.abspath('.'))


# -- Project information -----------------------------------------------------

project = 'Lumi Language Guide'
copyright = '2019, Lumi language contributors'
author = 'Lumi language contributors'

# The short X.Y version
version = '0.5'
# The full version, including alpha/beta/rc tags
release = 'lumi-0.5'

highlight_language = 'lumi'


# -- General configuration ---------------------------------------------------

# If your documentation needs a minimal Sphinx version, state it here.
#
# needs_sphinx = '1.0'

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = ['sphinxcontrib.spelling']

# Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']

# The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
#
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'

# The master toctree document.
master_doc = 'index'

# The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set "language" from the command line for these cases.
language = None

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This pattern also affects html_static_path and html_extra_path .
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']

# The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'

from pygments.lexer import RegexLexer, bygroups
from pygments import token
from sphinx.highlighting import lexers

class LumiLexer(RegexLexer):
    name = 'lumi'
    aliases = ['Lumi']
    filenames = ['*.lm']
    tokens = {
        'root': [
            (r'; .*$', token.Comment.Single),
            (r'\[;', token.Comment.Multiline, 'comment'),
            (r'~~~', token.String.Doc, 'documentation'),
            (r'"', token.String, 'string'),
            (r"'.*'", token.String.Char),
            (r'`.*`', token.String.Backtick),
            (r'-?(?:0x[0-9a-fA-F]+|0b[0-1]+|[0-9]+)', token.Number),
            (r' [+*><=][ \n]', token.Operator),
            (r'(?:-|not)[ \n]', token.Operator),
            (r' (?:div|mod|bnot|bor|band|xpr|shr|shl|is|is-not|or|and|'
             r'[!><:+\-*]=)[ \n]', token.Operator),
            (r'[?:.]', token.Operator),
            (r'->', token.Operator),
            (r'^ *(module|func|const|struct|class|interface|main|enum|'
             r'native(?: func| type)?|test|mock|alias|for|new|return|raise|'
             r'assert|assert-error|try|catch|if|else|else-if|loop|while|break|'
             r'continue|switch|case|default|fallthrough|copy|user|owner|var|'
             r's-var|strong|weak|shared|static|dynamic|global|implement|'
             'if-ok|if-error|else-if-ok|else-if-error)[ \n]',
             token.Keyword),
            (r'\b(copy|user|owner|var|s-var|strong|weak|shared|func|static|'
             r'dynamic|for|in) ', token.Keyword),
            (r'(?:true|false|self|base|sys)-[a-z0-9\-]*', token.Name.Variable),
            (r'_|true|false|self|base|sys', token.Name.Builtin.Pseudo),
            (r'[A-Z][A-Z0-9\-]+', token.Name.Constant),
            (r'[A-Z][a-z][a-zA-Z0-9]*', token.Keyword.Type),
            (r'([a-z][a-z\-0-9]*)(\()',
             bygroups(token.Name.Function, token.Punctuation)),
            (r'[a-z][a-z\-0-9]*', token.Name.Variable),
            (r'[()\[\]{},]', token.Punctuation),
            (r'\s', token.Whitespace),
            (r'.', token.Other)
        ],
        'comment': [
            (r'[^;\]]', token.Comment.Multiline),
            (r'\[;', token.Comment.Multiline, '#push'),
            (r';\]', token.Comment.Multiline, '#pop'),
            (r'[;\]]', token.Comment.Multiline)
        ],
        'documentation': [
            (r'[^~]', token.String.Doc),
            (r'~~~', token.String.Doc, '#pop'),
            (r'~', token.String.Doc)
        ],
        'string': [
            (r'[^"]', token.String),
            (r'\.', token.String),
            (r'"', token.String, '#pop')
        ]
    }

lexers['lumi'] = LumiLexer(startinline=True)


# -- Options for HTML output -------------------------------------------------

# The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#
html_theme = 'sphinx_rtd_theme'

# Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
#
# html_theme_options = {}

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = []

# Custom sidebar templates, must be a dictionary that maps document names
# to template names.
#
# The default sidebars (for documents that don't match any pattern) are
# defined by theme itself.  Builtin themes are using these templates by
# default: ``['localtoc.html', 'relations.html', 'sourcelink.html',
# 'searchbox.html']``.
#
# html_sidebars = {}

html_logo = 'lumi.jpeg'


# -- Options for HTMLHelp output ---------------------------------------------

# Output file base name for HTML help builder.
htmlhelp_basename = 'lumidoc'


# -- Options for LaTeX output ------------------------------------------------

latex_elements = {
    # The paper size ('letterpaper' or 'a4paper').
    #
    # 'papersize': 'letterpaper',

    # The font size ('10pt', '11pt' or '12pt').
    #
    # 'pointsize': '10pt',

    # Additional stuff for the LaTeX preamble.
    #
    # 'preamble': '',

    # Latex figure (float) alignment
    #
    # 'figure_align': 'htbp',
}

# Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'lumi.tex', 'Lumi Language Guide',
     'lumi', 'manual'),
]


# -- Options for manual page output ------------------------------------------

# One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'lumi', 'Lumi Language Guide',
     [author], 1)
]


# -- Options for Texinfo output ----------------------------------------------

# Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'lumi', 'Lumi Language Guide',
     author, 'lumi', 'Lumi Language Guide.',
     'Miscellaneous'),
]
