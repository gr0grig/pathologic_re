GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	init_termitnik2
	termitnik2@door1
	pt_b7q02_mmorlok
	pers_morlok
	b7q02_mmorlok.xml
	pt_b7q02_morlok
	b7q02_morlok.xml
	pt_b7q02_fog
	GetLocator
	fog_stat_indoor.xml
	add
	place_grabitels
	pt_b7q02_grabitel1
	pers_grabitel
	b7q02_grabitel.xml
	pt_b7q02_grabitel2
	fail
	completed
	b7q02
	cleanup
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	size
	get

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	AddActorByType (6 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_9 Op = 0xb4 Vars = (int, float)


0x0: PushEmpty(object)
0x1: Call2 0xbf

0x2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Call2 0xbf

0x6: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 7
0xa: Call2 0xa1

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, int, bool, cvector, cvector, object, object, object, int, bool, cvector, cvector, object, object)
0xe: @ Trace(Stack[-15])
0xf: Pop(0)
0x10: Push("init_termitnik2")
0x11: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "termitnik2@door1"
0x15: Stack[-1] = (bool) 0
0x16: Call2 0xd7

0x17: Pop(2)
0x18: Push("termitnik2")
0x19: @ GetSceneByName(Stack[-8], Stack[-1])
0x1a: Pop(1)
0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-4] = Stack[-12]
0x1d: Stack[-3] = "pt_b7q02_mmorlok"
0x1e: Stack[-2] = "pers_morlok"
0x1f: Stack[-1] = "b7q02_mmorlok.xml"
0x20: Call2 0xc5

0x21: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x22: Pop(5)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-4] = Stack[-12]
0x25: Stack[-3] = "pt_b7q02_morlok"
0x26: Stack[-2] = "pers_morlok"
0x27: Stack[-1] = "b7q02_morlok.xml"
0x28: Call2 0xc5

0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2a: Pop(5)
0x2b: Stack[-6] = (int) 1
0x2c: Push("pt_b7q02_fog")
0x2d: Pop(1); Push(Stack[-1] + Stack[-7]);
0x2e: @@ GetLocator(Stack[-1], Stack[-6], Stack[-5], Stack[-4])
0x2f: Pop(1)
0x30: Pop(0); Push((bool) Stack[-5] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: GOTO 0x3d

0x33: Push("fog")
0x34: Push("fog_stat_indoor.xml")
0x35: @ AddActorByType(Stack[-4], Stack[-2], Stack[-9], Stack[-6], Stack[-5], Stack[-1])
0x36: Pop(2)
0x37: @@ add(Stack[-2])
0x38: Pop(0)
0x39: Stack[-2] = 0
0x3a: Push((int) 1)
0x3b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3c: GOTO 0x2c

0x3d: Stack[-7] = 0
0x3e: GOTO 0x65

0x3f: Push("place_grabitels")
0x40: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x42: @ GetMainOutdoorScene(Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-4] = Stack[-6]
0x46: Stack[-3] = "pt_b7q02_grabitel1"
0x47: Stack[-2] = "pers_grabitel"
0x48: Stack[-1] = "b7q02_grabitel.xml"
0x49: Call2 0xc5

0x4a: Pop(4)
0x4b: @@ add(Stack[-1])
0x4c: Pop(1)
0x4d: PushEmpty(object, object, string, string, string)
0x4e: Stack[-4] = Stack[-6]
0x4f: Stack[-3] = "pt_b7q02_grabitel2"
0x50: Stack[-2] = "pers_grabitel"
0x51: Stack[-1] = "b7q02_grabitel.xml"
0x52: Call2 0xc5

0x53: Pop(4)
0x54: @@ add(Stack[-1])
0x55: Pop(1)
0x56: Stack[-1] = 0
0x57: GOTO 0x65

0x58: Push("fail")
0x59: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5b: PushEmpty()
0x5c: Call2 0x71

0x5d: Pop(0)
0x5e: GOTO 0x65

0x5f: Push("completed")
0x60: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x62: PushEmpty()
0x63: Call2 0x79

0x64: Pop(0)
0x65: Return(); Pop(14)

0x66: PushEmpty(int, int)
0x67: Push("b7q02")
0x68: @ GetVariable(Stack[-1], Stack[-2])
0x69: Pop(1)
0x6a: Push((int) 1000)
0x6b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6d: PushEmpty()
0x6e: Call2 0x71

0x6f: Pop(0)
0x70: Return(); Pop(2)

0x71: Push("b7q02")
0x72: Push((int) -1)
0x73: @ SetVariable(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: PushEmpty()
0x76: Call2 0x81

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: Push("b7q02")
0x7a: Push((int) 1000)
0x7b: @ SetVariable(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: PushEmpty()
0x7e: Call2 0x81

0x7f: Pop(0)
0x80: Return(); Pop(0)

0x81: EventDisable(26)
0x82: PushEmpty(string, bool)
0x83: Stack[-2] = "termitnik2@door1"
0x84: Stack[-1] = (bool) 1
0x85: Call2 0xd7

0x86: Pop(2)
0x87: Push( Stack[0 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: Push("cleanup")
0x8a: @ Trigger(Stack[-0], Stack[-1])
0x8b: Pop(1)
0x8c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8e: Push("cleanup")
0x8f: @ Trigger(Stack[-1], Stack[-1])
0x90: Pop(1)
0x91: PushEmpty(object, string)
0x92: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x93: Stack[-1] = "cleanup"
0x94: Call2 0xe8

0x95: Pop(2)
0x96: PushEmpty(object, string)
0x97: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x98: Stack[-1] = "cleanup"
0x99: Call2 0xe8

0x9a: Pop(2)
0x9b: PushEmpty(object)
0x9c: Call2 0xb9

0x9d: Pop(0)
0x9e: @ RemoveActor(Stack[-1])
0x9f: Pop(1)
0xa0: Return(); Pop(0)

0xa1: PushEmpty(float, float)
0xa2: @ GetGameTime(Stack[-1])
0xa3: Pop(0)
0xa4: Push((int) 24)
0xa5: Pop(1); Push(Stack[-4] * Stack[-1]);
0xa6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa8: PushEmpty()
0xa9: Call2 0x81

0xaa: Pop(0)
0xab: GOTO 0xb3

0xac: Push((int) 0)
0xad: Push((int) 24)
0xae: Pop(1); Push(Stack[-5] * Stack[-1]);
0xaf: @ SetTimeEvent(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: @ Hold()
0xb2: Pop(0)
0xb3: Return(); Pop(2)

0xb4: PushEmpty()
0xb5: PushEmpty()
0xb6: Call2 0x66

0xb7: Pop(0)
0xb8: Return(); Pop(0)

0xb9: PushEmpty(object, object)
0xba: @ self(Stack[-1])
0xbb: Pop(0)
0xbc: Stack[-3] = Stack[-1]
0xbd: Return(); Pop(2)

0xbe: Stack[-1] = 0
0xbf: PushEmpty(object, object)
0xc0: @ CreateObjectVector(Stack[-1])
0xc1: Pop(0)
0xc2: Stack[-3] = Stack[-1]
0xc3: Return(); Pop(2)

0xc4: Stack[-1] = 0
0xc5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xc7: Pop(0)
0xc8: Pop(0); Push((bool) Stack[-4] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xca: Push("Locator ")
0xcb: Pop(1); Push(Stack[-1] + Stack[-12]);
0xcc: Push(" doesn't exist")
0xcd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xce: @ Trace(Stack[-1])
0xcf: Pop(1)
0xd0: Stack[-1] = 0
0xd1: GOTO 0xd4

0xd2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xd3: Pop(0)
0xd4: Stack[-13] = Stack[-1]
0xd5: Return(); Pop(8)

0xd6: Stack[-1] = 0
0xd7: PushEmpty(object, object)
0xd8: @ FindActor(Stack[-1], Stack[-4])
0xd9: Pop(0)
0xda: Pop(0); Push((bool) Stack[-1] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdc: Push("Door ")
0xdd: Pop(1); Push(Stack[-1] + Stack[-5]);
0xde: Push(" not found")
0xdf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe0: @ Trace(Stack[-1])
0xe1: Pop(1)
0xe2: GOTO 0xe6

0xe3: Push("locked")
0xe4: @@ SetProperty(Stack[-1], Stack[-4])
0xe5: Pop(1)
0xe6: Return(); Pop(2)

0xe7: Stack[-1] = 0
0xe8: PushEmpty(int, int, object, int, int, object)
0xe9: Push(Stack[-8])
0xea: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xeb: @@ size(Stack[-3])
0xec: Pop(0)
0xed: Stack[-2] = (int) 0
0xee: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xef: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf0: @@ get(Stack[-1], Stack[-2])
0xf1: Pop(0)
0xf2: Push(Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: @ Trigger(Stack[-1], Stack[-7])
0xf5: Pop(0)
0xf6: Stack[-1] = 0
0xf7: Push((int) 1)
0xf8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xf9: GOTO 0xee

0xfa: Return(); Pop(6)

