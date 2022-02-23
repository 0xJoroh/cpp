#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(string target) : Form("Shrubbery", 55, 22), _target(target)
{
}
void ShrubberyCreationForm::action(const Bureaucrat &br) const
{
    if (!this->execute(br))
        return;
    try
    {
        if (this->getGradeToExecute() > 137)
            throw Form::GradeTooLowException();
        if (this->getGradeToSign() > 145)
            throw Form::GradeTooLowException();
        std::ofstream asciiTreeFile(this->_target + "_shrubbery");
        asciiTreeFile << "       ### " << endl;
        asciiTreeFile << "      #o### " << endl;
        asciiTreeFile << "    #####o### " << endl;
        asciiTreeFile << "   #o#\\#|#/### " << endl;
        asciiTreeFile << "    ###\\|/#o# " << endl;
        asciiTreeFile << "     # }|{  # " << endl;
        asciiTreeFile << "Joroh  }|{ " << endl;
        asciiTreeFile.close();
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    this->Form::operator=(rhs);
    return *this;
}
