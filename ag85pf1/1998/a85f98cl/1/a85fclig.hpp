
#pragma once
#ifndef A85FCLIG_HPP //AG19850316Cppframebrary1Part1998Corelibrary1GlobalIncrementingintegeridentificatorsgenerator
#define A85FCLIG_HPP //AG19850316Cppframebrary1Part1998Corelibrary1GlobalIncrementingintegeridentificatorsgenerator

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion1998{

            namespace Corelibrary1 {

                class GlobalIncrementalunsignedintegeridentificatorsgenerator{
                
                public:

                    void SetValueforGlobalIncrementalunsignedintegeridentificatorsgenerator(unsigned int nValue)
                    {
                        incrementingintegeridsgenerator = nValue;
                    }

                    unsigned int GetNextIdentificator()
                    {
                        return incrementingintegeridsgenerator++;
                    }

                private:
                
                    static unsigned int incrementingintegeridsgenerator;

                }; //class Incrementalidentificatorsgenerator

            } //namespace Corelibrary1

        } //namespace CppVersion1998

	} //namespace Cppframebrary1

} //namespace AG19850316

#endif //A85FCLIG_HPP - AG19850316Cppframebrary1Part1998Corelibrary1GlobalIncrementingintegeridentificatorsgenerator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
