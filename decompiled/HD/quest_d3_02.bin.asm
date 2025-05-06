GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d3q02
	r7_house2_01
	pt_d3q02_butcher1
	pers_butcher
	d3q02_butcher.xml
	pt_d3q02_butcher2
	d3q02_corpse
	actor_disp.bin
	d3q02_btrigger
	quest_d3_02_btrigger.bin
	r7_house2_01@door1
	r7_house2_01@door2
	pt_d3q02_doberman
	pers_doberman
	d3q02_doberman.xml
	teleport
	player
	mnogogrannik_han
	pt_d3q02_teleport
	GetLocator
	butcher_trigger
	d3q02SeeCorpse
	completed
	cleanup
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	SetVariable (2 args)
	AddScriptedActor (5 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x3e Vars = (string)
		EVENT_9 Op = 0xdd Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("d3q02")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(object, string)
0x6: Stack[-1] = "r7_house2_01"
0x7: Call2 0xe8

0x8: Stack[-3] = Stack[-2]
0x9: Pop(2)
0xa: PushEmpty(object, object, string, string, string)
0xb: Stack[-4] = Stack[-6]
0xc: Stack[-3] = "pt_d3q02_butcher1"
0xd: Stack[-2] = "pers_butcher"
0xe: Stack[-1] = "d3q02_butcher.xml"
0xf: Call2 0xee

0x10: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x11: Pop(5)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-4] = Stack[-6]
0x14: Stack[-3] = "pt_d3q02_butcher2"
0x15: Stack[-2] = "pers_butcher"
0x16: Stack[-1] = "d3q02_butcher.xml"
0x17: Call2 0xee

0x18: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Push("d3q02_corpse")
0x1b: Push("actor_disp.bin")
0x1c: Push(CVector(0.0, 0.0, 0.0))
0x1d: @ AddScriptedActor(Stack[-3], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x1e: Pop(3)
0x1f: Push("d3q02_btrigger")
0x20: Push("quest_d3_02_btrigger.bin")
0x21: Push(CVector(0.0, 0.0, 0.0))
0x22: @ AddScriptedActor(Stack[-4], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x23: Pop(3)
0x24: PushEmpty(string, bool)
0x25: Stack[-2] = "r7_house2_01@door1"
0x26: Stack[-1] = (bool) 0
0x27: Call2 0x100

0x28: Pop(2)
0x29: PushEmpty(string, bool)
0x2a: Stack[-2] = "r7_house2_01@door2"
0x2b: Stack[-1] = (bool) 0
0x2c: Call2 0x100

0x2d: Pop(2)
0x2e: @ GetMainOutdoorScene(Stack[-1])
0x2f: Pop(0)
0x30: PushEmpty(object, object, string, string, string)
0x31: Stack[-4] = Stack[-6]
0x32: Stack[-3] = "pt_d3q02_doberman"
0x33: Stack[-2] = "pers_doberman"
0x34: Stack[-1] = "d3q02_doberman.xml"
0x35: Call2 0xee

0x36: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x37: Pop(5)
0x38: PushEmpty(int)
0x39: Stack[-1] = (int) 3
0x3a: Call2 0xca

0x3b: Pop(1)
0x3c: Return(); Pop(2)

0x3d: Stack[-1] = 0
0x3e: PushEmpty(object, object, cvector, cvector, bool, object, object, cvector, cvector, bool)
0x3f: @ Trace(Stack[-11])
0x40: Pop(0)
0x41: Push("teleport")
0x42: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x44: Push("player")
0x45: @ FindActor(Stack[-6], Stack[-1])
0x46: Pop(1)
0x47: Push(Stack[-5])
0x48: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x49: Push("mnogogrannik_han")
0x4a: @ GetSceneByName(Stack[-5], Stack[-1])
0x4b: Pop(1)
0x4c: Push("pt_d3q02_teleport")
0x4d: @@ GetLocator(Stack[-1], Stack[-2], Stack[-4], Stack[-3])
0x4e: Pop(1)
0x4f: @ Teleport(Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x50: Pop(0)
0x51: Stack[-4] = 0
0x52: Stack[-5] = 0
0x53: GOTO 0x72

0x54: Push("butcher_trigger")
0x55: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x57: Push( Stack[0 + Tasks[-1].StackPointer] )
0x58: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x59: Push("trigger")
0x5a: @ Trigger(Stack[-0], Stack[-1])
0x5b: Pop(1)
0x5c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5e: Push("trigger")
0x5f: @ Trigger(Stack[-1], Stack[-1])
0x60: Pop(1)
0x61: PushEmpty()
0x62: Call2 0x9c

0x63: Pop(0)
0x64: Push("d3q02SeeCorpse")
0x65: Push((int) 1)
0x66: @ SetVariable(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: PushEmpty()
0x69: Call2 0x111

0x6a: Pop(0)
0x6b: GOTO 0x72

0x6c: Push("completed")
0x6d: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6f: PushEmpty()
0x70: Call2 0x86

0x71: Pop(0)
0x72: Return(); Pop(10)

0x73: PushEmpty(int, int)
0x74: Push("d3q02")
0x75: @ GetVariable(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Push((int) 1000)
0x78: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7a: PushEmpty()
0x7b: Call2 0x7e

0x7c: Pop(0)
0x7d: Return(); Pop(2)

0x7e: Push("d3q02")
0x7f: Push((int) -1)
0x80: @ SetVariable(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: PushEmpty()
0x83: Call2 0xb1

0x84: Pop(0)
0x85: Return(); Pop(0)

0x86: PushEmpty(int, int)
0x87: Push("d3q02")
0x88: @ GetVariable(Stack[-1], Stack[-2])
0x89: Pop(1)
0x8a: PushEmpty(bool)
0x8b: Stack[-1] = (bool) 0
0x8c: Push((int) 1000)
0x8d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8f: Push((int) -1)
0x90: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x94: Push("d3q02")
0x95: Push((int) 1000)
0x96: @ SetVariable(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: PushEmpty()
0x99: Call2 0xb1

0x9a: Pop(0)
0x9b: Return(); Pop(2)

0x9c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9e: Push("cleanup")
0x9f: @ Trigger(Stack[-0], Stack[-1])
0xa0: Pop(1)
0xa1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa3: Push("cleanup")
0xa4: @ Trigger(Stack[-1], Stack[-1])
0xa5: Pop(1)
0xa6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: Push("cleanup")
0xa9: @ Trigger(Stack[-3], Stack[-1])
0xaa: Pop(1)
0xab: Push( Stack[4 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push("cleanup")
0xae: @ Trigger(Stack[-4], Stack[-1])
0xaf: Pop(1)
0xb0: Return(); Pop(0)

0xb1: EventDisable(26)
0xb2: PushEmpty()
0xb3: Call2 0x9c

0xb4: Pop(0)
0xb5: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb7: Push("cleanup")
0xb8: @ Trigger(Stack[-2], Stack[-1])
0xb9: Pop(1)
0xba: PushEmpty(string, bool)
0xbb: Stack[-2] = "r7_house2_01@door1"
0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0x100

0xbe: Pop(2)
0xbf: PushEmpty(string, bool)
0xc0: Stack[-2] = "r7_house2_01@door2"
0xc1: Stack[-1] = (bool) 1
0xc2: Call2 0x100

0xc3: Pop(2)
0xc4: PushEmpty(object)
0xc5: Call2 0xe2

0xc6: Pop(0)
0xc7: @ RemoveActor(Stack[-1])
0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty(float, float)
0xcb: @ GetGameTime(Stack[-1])
0xcc: Pop(0)
0xcd: Push((int) 24)
0xce: Pop(1); Push(Stack[-4] * Stack[-1]);
0xcf: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd1: PushEmpty()
0xd2: Call2 0xb1

0xd3: Pop(0)
0xd4: GOTO 0xdc

0xd5: Push((int) 0)
0xd6: Push((int) 24)
0xd7: Pop(1); Push(Stack[-5] * Stack[-1]);
0xd8: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ Hold()
0xdb: Pop(0)
0xdc: Return(); Pop(2)

0xdd: PushEmpty()
0xde: PushEmpty()
0xdf: Call2 0x73

0xe0: Pop(0)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, object)
0xe3: @ self(Stack[-1])
0xe4: Pop(0)
0xe5: Stack[-3] = Stack[-1]
0xe6: Return(); Pop(2)

0xe7: Stack[-1] = 0
0xe8: PushEmpty(object, object)
0xe9: @ GetSceneByName(Stack[-1], Stack[-3])
0xea: Pop(0)
0xeb: Stack[-4] = Stack[-1]
0xec: Return(); Pop(2)

0xed: Stack[-1] = 0
0xee: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xef: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xf0: Pop(0)
0xf1: Pop(0); Push((bool) Stack[-4] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf3: Push("Locator ")
0xf4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf5: Push(" doesn't exist")
0xf6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf7: @ Trace(Stack[-1])
0xf8: Pop(1)
0xf9: Stack[-1] = 0
0xfa: GOTO 0xfd

0xfb: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xfc: Pop(0)
0xfd: Stack[-13] = Stack[-1]
0xfe: Return(); Pop(8)

0xff: Stack[-1] = 0
0x100: PushEmpty(object, object)
0x101: @ FindActor(Stack[-1], Stack[-4])
0x102: Pop(0)
0x103: Pop(0); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x105: Push("Door ")
0x106: Pop(1); Push(Stack[-1] + Stack[-5]);
0x107: Push(" not found")
0x108: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109: @ Trace(Stack[-1])
0x10a: Pop(1)
0x10b: GOTO 0x10f

0x10c: Push("locked")
0x10d: @@ SetProperty(Stack[-1], Stack[-4])
0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: Stack[-1] = 0
0x111: PushEmpty(object, object)
0x112: Push((int) 80)
0x113: Push((int) 2)
0x114: Push((int) 512162)
0x115: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: PushEmpty(bool, object, int)
0x118: Stack[-2] = Stack[-4]
0x119: Stack[-1] = (int) 26
0x11a: Call2 0x12b

0x11b: Pop(3)
0x11c: Return(); Pop(2)

0x11d: Stack[-1] = 0
0x11e: PushEmpty(object, object)
0x11f: @ GetDiaryRoot(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: Push("Can't retrieve diary root")
0x124: @ Trace(Stack[-1])
0x125: Pop(1)
0x126: Stack[-3] = (bool) 0
0x127: Return(); Pop(2)

0x128: Stack[-3] = Stack[-1]
0x129: Return(); Pop(2)

0x12a: Stack[-1] = 0
0x12b: PushEmpty(object, object, int, object, object, int)
0x12c: PushEmpty(object)
0x12d: Call2 0x11e

0x12e: Stack[-4] = Stack[-1]
0x12f: Pop(1)
0x130: @@ Find(Stack[-7], Stack[-2])
0x131: Pop(0)
0x132: Pop(0); Push((bool) Stack[-2] == 0)
0x133: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x134: Push("Can't find diary parent with id: ")
0x135: Pop(1); Push(Stack[-1] + Stack[-8]);
0x136: @ Trace(Stack[-1])
0x137: Pop(1)
0x138: Stack[-9] = (bool) 0
0x139: Return(); Pop(6)

0x13a: @@ AddChild(Stack[-8])
0x13b: Pop(0)
0x13c: Push((int) 7)
0x13d: @ SendWorldWndMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ GetCategory(Stack[-1])
0x140: Pop(0)
0x141: @ SetDiarySection(Stack[-1])
0x142: Pop(0)
0x143: Stack[-9] = (bool) 0
0x144: Return(); Pop(6)

0x145: Stack[-2] = 0
0x146: Stack[-3] = 0
