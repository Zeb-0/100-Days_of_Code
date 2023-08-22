attack = {'quick': (lambda: print('Quick attack')),
          'power': (lambda: print('Power attack')),
          'miss': (lambda: print('Mised attack'))}

attack['quick']()

import random

attackkey = random.choice(list(attack.keys()))
attack[attackkey]()