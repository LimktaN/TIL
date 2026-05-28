# docstring

def get_name(first_name, last_name):
    """take first name and last name then return combine two"""
    # 함수 작성 시 안내 얼럿으로 노출
    if first_name == "":
        return "Your first name is missing ..."
    if last_name == "":
        return "Your last name is missing ..."
    return f"{first_name}, {last_name}"

print(get_name.__doc__)

# Epytext
"""
This is a javadoc style.

@param param1: this is a first param
@param param2: this is a second param
@return: this is a description of what is returned
@raise keyError: raises an exception
"""


# reST reStructuredText (reST) from Sphinx
"""
This is a reST style.

:param str first_name: this is a first param
:param str last_name: this is a second param
:returns: this is a description of what is returned
:raise keyError: raises an exception
"""


# Google
"""
This is an example of Google style.

Args:
    param1: ~~
    param2: ~~

Returns:
    this ~~

Raises:
    KeyError: ~~
"""


# Numpydoc
"""
My numpydoc desc ~~

Parameters
----------------------
first: array_like
    the 1st param name 'first'
second: ~~
third: ~~

Returns
----------------------
string
    a value in a string


Raises
----------------------
KeyError
    when a key error
OtherError
    when an other error
"""