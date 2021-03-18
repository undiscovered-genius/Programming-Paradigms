symptom(arun,fever).
symptom(arun,rash).
symptom(arun,headache).
symptom(arun,runn_nose).
symptom(varun,chills).
symptom(varun,fever).
symptom(varun,hedache).
symptom(varun,body_ache).
symptom(tarun,runny_nose).
symptom(tarun,rash).
symptom(tarun,flu).
symptom(ayush,eye_irritation).
symptom(ayush,sneezing).
symptom(ayush,itchy_throat).
symptom(ayush,stuffy_nose).
symptom(aman,frequent_bowel_movement).
symptom(aman,abdomen_pain).
symptom(aman,fever).
symptom(akhil,restlessness).
symptom(akhil,irritability).
symptom(akhil,difficulty_concentrating).
symptom(akhil,excessive_sweating).
symptom(tania,wheezing).
symptom(tania,shortness_breath).
symptom(tania,tight_chest).
symptom(tania,coughing).

disease(Patient,asthma):-symptom(Patient,wheezing),
        symptom(Patient,shortness_breath),
        symptom(Patient,tight_chest),
        symptom(Patient,coughing).

disease(Patient,allergy):-symptom(Patient,eye_irritation),
        symptom(Patient,sneezing),
        symptom(Patient,itchy_throat),
        symptom(Patient,stuffy_nose).

disease(Patient,anxiety):-symptom(Patient,restlessness),
        symptom(Patient,irritability),
        symptom(Patient,difficulty_concentrating),
        symptom(Patient,excessive_sweating).

disease(Patient,diarrhea):-symptom(Patient,frequent_bowel_movement),
        symptom(Patient,abdomen_pain),
        symptom(Patient,fever).


disease(Patient,measels):-symptom(Patient,fever),
        symptom(Patient,cough),
        symptom(Patient,conjunctivitis),
        symptom(Patient,rash).

disease(Patient,german_measles) :-symptom(Patient,fever),
        symptom(Patient,headache),
        symptom(Patient,runny_nose),
        symptom(Patient,rash).

disease(Patient,flu) :-symptom(Patient,chills),
        symptom(Patient,fever),
        symptom(Patient,headache),
        symptom(Patient,body_ache).

disease(patient,common_cold) :-
        symptom(patient,headache),
        symptom(patient,sneezing),
        symptom(patient,sore_throat),
        symptom(patient,chills),
        symptom(patient,runny_nose).
disease(Patient,mumps) :-
        symptom(Patient,fever),
        symptom(Patient,swollen_glands).

disease(Patient,chicken_pox) :-
        symptom(Patient,fever),
        symptom(Patient,rash),
        symptom(Patient,body_ache),
        symptom(Patient,chills).









