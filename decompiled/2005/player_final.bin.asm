GlobalVarCount = 1
	G_VAR_0 string 

Strings:
	effects
	player_head.bin
	player_eyes_height.bin
	wood
	metal
	ground
	water
	carpet
	stone
	step_

Import:
	HasProperty (2 args)
	SetProperty (2 args)
	ApplyEffect (1 args)
	Hold (0 args)
	GetGroundMaterial (2 args)
	IsExistingSound (2 args)
	irand (2 args)
	PlaySound (1 args)
	KillTimer (2 args)
	ModNoise (1 args)
	SetTimer (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_7 Op = 0x14 Vars = (int)

Events:
EVENT_44 Op = 0xe0 Vars = ()
EVENT_20 Op = 0xe7 Vars = ()
EVENT_21 Op = 0xee Vars = ()
EVENT_45 Op = 0xf5 Vars = ()

0x0: PushEmpty(bool, bool)
0x1: Push("effects")
0x2: @ HasProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Pop(0); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x6: Push("effects")
0x7: Push((bool) 1)
0x8: @ SetProperty(Stack[-2], Stack[-1])
0x9: Pop(2)
0xa: Push("player_head.bin")
0xb: @ ApplyEffect(Stack[-1])
0xc: Pop(1)
0xd: Push("player_eyes_height.bin")
0xe: @ ApplyEffect(Stack[-1])
0xf: Pop(1)
0x10: @ Hold()
0x11: Pop(0)
0x12: GOTO 0x10

0x13: Return(); Pop(2)

0x14: PushEmpty()
0x15: PushEmpty(bool, int)
0x16: Stack[-1] = Stack[-3]
0x17: Call2 0x3a

0x18: Pop(2)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: Push((int) 1)
0x1c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1e: Stack[-2] = "wood"
0x1f: Return(); Pop(0)

0x20: GOTO 0x38

0x21: Push((int) 2)
0x22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: Stack[-2] = "metal"
0x25: Return(); Pop(0)

0x26: GOTO 0x38

0x27: Push((int) 3)
0x28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: Stack[-2] = "ground"
0x2b: Return(); Pop(0)

0x2c: GOTO 0x38

0x2d: Push((int) 4)
0x2e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: Stack[-2] = "water"
0x31: Return(); Pop(0)

0x32: GOTO 0x38

0x33: Push((int) 5)
0x34: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x36: Stack[-2] = "carpet"
0x37: Return(); Pop(0)

0x38: Stack[-2] = "stone"
0x39: Return(); Pop(0)

0x3a: PushEmpty()
0x3b: Push((int) 10)
0x3c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3e: PushEmpty()
0x3f: Call2 0xd1

0x40: Pop(0)
0x41: Stack[-2] = (bool) 1
0x42: Return(); Pop(0)

0x43: GOTO 0x55

0x44: Push((int) 11)
0x45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x47: PushEmpty()
0x48: Call2 0xd9

0x49: Pop(0)
0x4a: Stack[-2] = (bool) 1
0x4b: Return(); Pop(0)

0x4c: GOTO 0x55

0x4d: Push((int) 12)
0x4e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x50: PushEmpty()
0x51: Call2 0xd5

0x52: Pop(0)
0x53: Stack[-2] = (bool) 1
0x54: Return(); Pop(0)

0x55: Stack[-2] = (bool) 0
0x56: Return(); Pop(0)

0x57: PushEmpty(bool, int, string, int, bool, int, string, string, bool, int, string, int, bool, int, string, string)
0x58: @ GetGroundMaterial(Stack[-8], Stack[-7])
0x59: Pop(0)
0x5a: Pop(0); Push((bool) Stack[-8] == 0)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-7] = (int) -1
0x5d: PushEmpty(string, int)
0x5e: Stack[-1] = Stack[-9]
0x5f: Call2 0x1a

0x60: Stack[-8] = Stack[-2]
0x61: Pop(2)
0x62: Stack[-5] = (int) 0
0x63: Push("step_")
0x64: Pop(1); Push(Stack[-1] + Stack[-7]);
0x65: Push((int) 1)
0x66: Pop(1); Push(Stack[-7] + Stack[-1]);
0x67: Pop(2); Push(Stack[-2] + Stack[-1]);
0x68: @ IsExistingSound(Stack[-5], Stack[-1])
0x69: Pop(1)
0x6a: Pop(0); Push((bool) Stack[-4] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: GOTO 0x70

0x6d: Push((int) 1)
0x6e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x6f: GOTO 0x63

0x70: Pop(0); Push((bool) Stack[-5] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x72: Push(GlobalVars[0])
0x73: Stack[-1] = ""
0x74: GlobalVars[0] = Stack[-1]; Pop(1)
0x75: Return(); Pop(16)

0x76: Push((int) 1)
0x77: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-3] = (int) 0
0x7a: GOTO 0x87

0x7b: @ irand(Stack[-3], Stack[-5])
0x7c: Pop(0)
0x7d: Push("step_")
0x7e: Pop(1); Push(Stack[-1] + Stack[-7]);
0x7f: Push((int) 1)
0x80: Pop(1); Push(Stack[-5] + Stack[-1]);
0x81: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x82: Push(GlobalVars[0])
0x83: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: GOTO 0x87

0x86: GOTO 0x7b

0x87: Push("step_")
0x88: Pop(1); Push(Stack[-1] + Stack[-7]);
0x89: Push((int) 1)
0x8a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x8b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8c: @ PlaySound(Stack[-1])
0x8d: Pop(0)
0x8e: Push(GlobalVars[0])
0x8f: Stack[-1] = Stack[-2]
0x90: GlobalVars[0] = Stack[-1]; Pop(1)
0x91: Return(); Pop(16)

0x92: PushEmpty(bool, bool)
0x93: Push((int) 11)
0x94: @ KillTimer(Stack[-1], Stack[-2])
0x95: Pop(1)
0x96: Push(Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x98: Push((int) -3)
0x99: @ ModNoise(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty()
0x9d: Call2 0x92

0x9e: Pop(0)
0x9f: Push((int) 11)
0xa0: Push((float)0.15)
0xa1: @ SetTimer(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: Push((int) 3)
0xa4: @ ModNoise(Stack[-1])
0xa5: Pop(1)
0xa6: Return(); Pop(0)

0xa7: PushEmpty(bool, bool)
0xa8: Push((int) 10)
0xa9: @ KillTimer(Stack[-1], Stack[-2])
0xaa: Pop(1)
0xab: Push(Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push((int) -2)
0xae: @ ModNoise(Stack[-1])
0xaf: Pop(1)
0xb0: Return(); Pop(2)

0xb1: PushEmpty(bool, bool)
0xb2: Push((int) 12)
0xb3: @ KillTimer(Stack[-1], Stack[-2])
0xb4: Pop(1)
0xb5: Push(Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb7: Push((int) -1)
0xb8: @ ModNoise(Stack[-1])
0xb9: Pop(1)
0xba: Return(); Pop(2)

0xbb: PushEmpty()
0xbc: Call2 0xa7

0xbd: Pop(0)
0xbe: Push((int) 10)
0xbf: Push((float)0.35)
0xc0: @ SetTimer(Stack[-2], Stack[-1])
0xc1: Pop(2)
0xc2: Push((int) 2)
0xc3: @ ModNoise(Stack[-1])
0xc4: Pop(1)
0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: Call2 0xb1

0xc8: Pop(0)
0xc9: Push((int) 12)
0xca: Push((float)0.6)
0xcb: @ SetTimer(Stack[-2], Stack[-1])
0xcc: Pop(2)
0xcd: Push((int) 1)
0xce: @ ModNoise(Stack[-1])
0xcf: Pop(1)
0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: Call2 0x57

0xd3: Pop(0)
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: Call2 0x57

0xd7: Pop(0)
0xd8: Return(); Pop(0)

0xd9: PushEmpty()
0xda: Call2 0x57

0xdb: Pop(0)
0xdc: PushEmpty()
0xdd: Call2 0x92

0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: Call2 0xc6

0xe2: Pop(0)
0xe3: PushEmpty()
0xe4: Call2 0x92

0xe5: Pop(0)
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: Call2 0xbb

0xe9: Pop(0)
0xea: PushEmpty()
0xeb: Call2 0x92

0xec: Pop(0)
0xed: Return(); Pop(0)

0xee: PushEmpty()
0xef: Call2 0xa7

0xf0: Pop(0)
0xf1: PushEmpty()
0xf2: Call2 0x9c

0xf3: Pop(0)
0xf4: Return(); Pop(0)

0xf5: PushEmpty()
0xf6: Call2 0xb1

0xf7: Pop(0)
0xf8: Return(); Pop(0)

