In questo progetto abbiamo studiato e simulato il comportamento del **Kuka LWR4** nell'inseguimento di una traiettoria circolare, utilizzando diversi tipi di damping. In particolare, sono stati considerati tre casi: **no damping**, **velocity damping** e **momentum damping**.

+ **simulation_robot2:** In questa cartella si trova il file **example**, che contiene il codice per configurare il robot e la traiettoria iniziale. Qui vengono generati e visualizzati grafici relativi alla velocità dei giunti, alla coppia (torque), alla posizione dei giunti e all'inseguimento della traiettoria. Inoltre, il file **model1** contiene il modello Simulink del robot e il controllo di torque utilizzato nel sistema.

+ **simulation_robot2acc:** In questa cartella si trova il file **example**, che fornisce il codice per configurare il robot e la traiettoria iniziale. Vengono generati grafici relativi alla velocità dei giunti, all'accelerazione, alla posizione dei giunti e all'inseguimento della traiettoria. Il file **model1acc** contiene il modello Simulink del robot e il controllo di accelerazione utilizzato.

+ **HW_Robotics_II:** Questo paper riassume la teoria di base necessaria per comprendere il progetto, con una parte finale che descrive le diverse simulazioni effettuate per analizzare i comportamenti del robot.

+ **Videos:** La cartella contiene vari video relativi a diverse simulazioni, con differenti parametri di guadagno, l'aggiunta di vincoli su accelerazione o coppia (torque), e simulazioni con traiettorie differenti.
