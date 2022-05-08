# Semantics

## NLP

Analysation of sentences with Semantics method


## Testing

You can enter a sentence, checks grammatical status, responding with yep/no and a tree and then evaluates the truth of the sentence, responding with 0/1 the 'situation' being referred to is defined by the files:  
  
- likes_rel    : 2-place  
- student_rel  : 1-place  
- lecturer_rel : 1-place  
- subject_rel  : 1-place  
  
intended grammar: university_gram  
  
inputs to try with expected outcomes:  
  
- Martin likes maths: true  
- Martin likes history: false  
- Hermione likes history: true  
- Hermione is a student: true  
- geometry is a student: false  
- geometry is a subject: true  
- a lecturer likes maths: true  
- a lecturer likes history: false  
- every lecturer likes geometry: true  
- every lecturer likes maths: false  
- every student who likes maths likes geometry: true  
- every student who likes geometry likes maths: false  
- Plato is a lecturer who likes geometry: true  
