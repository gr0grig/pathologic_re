GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	mnogogrannik_han@door1
	init_termitnik2
	burah_home
	noburah
	cot_eva
	nodanko
	warehouse_rubin
	norubin
	termitnik2@door1
	pt_k9q01_burah
	NPC_Bakalavr
	k9q01_danko.xml
	pt_k9q01_danko
	NPC_Burah
	k9q01_burah.xml
	init_mnogogrannik
	mnogogrannik@door1
	mnogogrannik_han@door2
	hidden_room@door1
	hidden_room
	pt_boy
	pers_littleboy2
	k9q01_littleboy.xml
	pt_girl
	pers_littlegirl2
	k9q01_littlegirl.xml
	fail
	completed
	cleanup
	k9q01
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	klara2_npc_positioner
	init

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "mnogogrannik_han@door1"
0x2: Stack[-1] = (bool) 0
0x3: Call2 0xf0

0x4: Pop(2)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(object, object, int, object, object, int)
0xa: @ Trace(Stack[-7])
0xb: Pop(0)
0xc: Push("init_termitnik2")
0xd: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0xf: Push("burah_home")
0x10: @ GetSceneByName(Stack[-4], Stack[-1])
0x11: Pop(1)
0x12: Push("noburah")
0x13: @ Trigger(Stack[-4], Stack[-1])
0x14: Pop(1)
0x15: Push("cot_eva")
0x16: @ GetSceneByName(Stack[-4], Stack[-1])
0x17: Pop(1)
0x18: Push("nodanko")
0x19: @ Trigger(Stack[-4], Stack[-1])
0x1a: Pop(1)
0x1b: Push("warehouse_rubin")
0x1c: @ GetSceneByName(Stack[-4], Stack[-1])
0x1d: Pop(1)
0x1e: Push("norubin")
0x1f: @ Trigger(Stack[-4], Stack[-1])
0x20: Pop(1)
0x21: Push("termitnik2")
0x22: @ GetSceneByName(Stack[-4], Stack[-1])
0x23: Pop(1)
0x24: PushEmpty(string, bool)
0x25: Stack[-2] = "termitnik2@door1"
0x26: Stack[-1] = (bool) 0
0x27: Call2 0xf0

0x28: Pop(2)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-4] = Stack[-8]
0x2b: Stack[-3] = "pt_k9q01_burah"
0x2c: Stack[-2] = "NPC_Bakalavr"
0x2d: Stack[-1] = "k9q01_danko.xml"
0x2e: Call2 0xde

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: PushEmpty(object, object, string, string, string)
0x32: Stack[-4] = Stack[-8]
0x33: Stack[-3] = "pt_k9q01_danko"
0x34: Stack[-2] = "NPC_Burah"
0x35: Stack[-1] = "k9q01_burah.xml"
0x36: Call2 0xde

0x37: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x38: Pop(5)
0x39: Stack[-3] = 0
0x3a: GOTO 0x8b

0x3b: Push("init_mnogogrannik")
0x3c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x3e: PushEmpty(string, bool)
0x3f: Stack[-2] = "mnogogrannik@door1"
0x40: Stack[-1] = (bool) 0
0x41: Call2 0xf0

0x42: Pop(2)
0x43: PushEmpty(string, bool)
0x44: Stack[-2] = "mnogogrannik_han@door2"
0x45: Stack[-1] = (bool) 0
0x46: Call2 0xf0

0x47: Pop(2)
0x48: PushEmpty(string, bool)
0x49: Stack[-2] = "hidden_room@door1"
0x4a: Stack[-1] = (bool) 0
0x4b: Call2 0xf0

0x4c: Pop(2)
0x4d: Push("hidden_room")
0x4e: @ GetSceneByName(Stack[-3], Stack[-1])
0x4f: Pop(1)
0x50: PushEmpty(object, object, string, string, string)
0x51: Stack[-4] = Stack[-7]
0x52: Stack[-3] = "pt_boy"
0x53: Stack[-2] = "pers_littleboy2"
0x54: Stack[-1] = "k9q01_littleboy.xml"
0x55: Call2 0xde

0x56: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x57: Pop(5)
0x58: PushEmpty(object, object, string, string, string)
0x59: Stack[-4] = Stack[-7]
0x5a: Stack[-3] = "pt_girl"
0x5b: Stack[-2] = "pers_littlegirl2"
0x5c: Stack[-1] = "k9q01_littlegirl.xml"
0x5d: Call2 0xde

0x5e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x5f: Pop(5)
0x60: Stack[-2] = 0
0x61: GOTO 0x8b

0x62: Push("fail")
0x63: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x8c

0x67: Pop(0)
0x68: PushEmpty()
0x69: Call2 0x10d

0x6a: Pop(0)
0x6b: PushEmpty()
0x6c: Call2 0x113

0x6d: Pop(0)
0x6e: GOTO 0x8b

0x6f: Push("completed")
0x70: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x72: PushEmpty()
0x73: Call2 0x94

0x74: Pop(0)
0x75: PushEmpty()
0x76: Call2 0x10d

0x77: Pop(0)
0x78: PushEmpty()
0x79: Call2 0x113

0x7a: Pop(0)
0x7b: GOTO 0x8b

0x7c: Push("cleanup")
0x7d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7f: Push("k9q01")
0x80: @ GetVariable(Stack[-1], Stack[-2])
0x81: Pop(1)
0x82: Push((int) 1000)
0x83: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x85: PushEmpty()
0x86: Call2 0x8c

0x87: Pop(0)
0x88: PushEmpty()
0x89: Call2 0xce

0x8a: Pop(0)
0x8b: Return(); Pop(6)

0x8c: Push("k9q01")
0x8d: Push((int) -1)
0x8e: @ SetVariable(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: PushEmpty()
0x91: Call2 0x9c

0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: Push("k9q01")
0x95: Push((int) 1000)
0x96: @ SetVariable(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: PushEmpty()
0x99: Call2 0x9c

0x9a: Pop(0)
0x9b: Return(); Pop(0)

0x9c: PushEmpty(object, object)
0x9d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9f: Push("cleanup")
0xa0: @ Trigger(Stack[-1], Stack[-1])
0xa1: Pop(1)
0xa2: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa3: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa4: Push("cleanup")
0xa5: @ Trigger(Stack[-0], Stack[-1])
0xa6: Pop(1)
0xa7: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa9: Push("cleanup")
0xaa: @ Trigger(Stack[-2], Stack[-1])
0xab: Pop(1)
0xac: Push( Stack[3 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xae: Push("cleanup")
0xaf: @ Trigger(Stack[-3], Stack[-1])
0xb0: Pop(1)
0xb1: Push("cot_eva")
0xb2: @ GetSceneByName(Stack[-2], Stack[-1])
0xb3: Pop(1)
0xb4: Push("danko")
0xb5: @ Trigger(Stack[-2], Stack[-1])
0xb6: Pop(1)
0xb7: Push("warehouse_rubin")
0xb8: @ GetSceneByName(Stack[-2], Stack[-1])
0xb9: Pop(1)
0xba: Push("rubin")
0xbb: @ Trigger(Stack[-2], Stack[-1])
0xbc: Pop(1)
0xbd: PushEmpty(string, bool)
0xbe: Stack[-2] = "mnogogrannik@door1"
0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0xf0

0xc1: Pop(2)
0xc2: PushEmpty(string, bool)
0xc3: Stack[-2] = "mnogogrannik_han@door1"
0xc4: Stack[-1] = (bool) 1
0xc5: Call2 0xf0

0xc6: Pop(2)
0xc7: PushEmpty(string, bool)
0xc8: Stack[-2] = "hidden_room@door1"
0xc9: Stack[-1] = (bool) 1
0xca: Call2 0xf0

0xcb: Pop(2)
0xcc: Return(); Pop(2)

0xcd: Stack[-1] = 0
0xce: EventDisable(26)
0xcf: PushEmpty()
0xd0: Call2 0x11c

0xd1: Pop(0)
0xd2: PushEmpty(object)
0xd3: Call2 0xd8

0xd4: Pop(0)
0xd5: @ RemoveActor(Stack[-1])
0xd6: Pop(1)
0xd7: Return(); Pop(0)

0xd8: PushEmpty(object, object)
0xd9: @ self(Stack[-1])
0xda: Pop(0)
0xdb: Stack[-3] = Stack[-1]
0xdc: Return(); Pop(2)

0xdd: Stack[-1] = 0
0xde: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdf: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe0: Pop(0)
0xe1: Pop(0); Push((bool) Stack[-4] == 0)
0xe2: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe3: Push("Locator ")
0xe4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe5: Push(" doesn't exist")
0xe6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe7: @ Trace(Stack[-1])
0xe8: Pop(1)
0xe9: Stack[-1] = 0
0xea: GOTO 0xed

0xeb: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xec: Pop(0)
0xed: Stack[-13] = Stack[-1]
0xee: Return(); Pop(8)

0xef: Stack[-1] = 0
0xf0: PushEmpty(object, object)
0xf1: @ FindActor(Stack[-1], Stack[-4])
0xf2: Pop(0)
0xf3: Pop(0); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf5: Push("Door ")
0xf6: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf7: Push(" not found")
0xf8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf9: @ Trace(Stack[-1])
0xfa: Pop(1)
0xfb: GOTO 0xff

0xfc: Push("locked")
0xfd: @@ SetProperty(Stack[-1], Stack[-4])
0xfe: Pop(1)
0xff: Return(); Pop(2)

0x100: Stack[-1] = 0
0x101: PushEmpty(object, object)
0x102: @ FindActor(Stack[-1], Stack[-4])
0x103: Pop(0)
0x104: Pop(0); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: Stack[-5] = (bool) 0
0x107: Return(); Pop(2)

0x108: @ Trigger(Stack[-1], Stack[-3])
0x109: Pop(0)
0x10a: Stack[-5] = (bool) 1
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(bool, string, string)
0x10e: Stack[-2] = "klara2_npc_positioner"
0x10f: Stack[-1] = "init"
0x110: Call2 0x101

0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: PushEmpty(object, object)
0x114: Push("burah_home")
0x115: @ GetSceneByName(Stack[-2], Stack[-1])
0x116: Pop(1)
0x117: Push("noburah")
0x118: @ Trigger(Stack[-2], Stack[-1])
0x119: Pop(1)
0x11a: Return(); Pop(2)

0x11b: Stack[-1] = 0
0x11c: PushEmpty(object, object)
0x11d: Push("burah_home")
0x11e: @ GetSceneByName(Stack[-2], Stack[-1])
0x11f: Pop(1)
0x120: Push("burah")
0x121: @ Trigger(Stack[-2], Stack[-1])
0x122: Pop(1)
0x123: Return(); Pop(2)

0x124: Stack[-1] = 0
