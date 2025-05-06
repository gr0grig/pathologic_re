GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	b4q02
	place_boy
	pt_b4q02_boy
	pers_boy
	b4q02_boy.xml
	house5_unoin03r
	pt_b4q02_samopal
	scripted_container
	b4q02_samopal.xml
	pt_b4q02_samopal_ammo
	b4q02_samopal_ammo.xml
	boy_run
	pt_b4q02_grabitel
	GetLocator
	pers_grabitel
	b4q02_grabitel.xml
	AddStationaryActor
	add
	GetActor
	Remove
	ammo_or_samopal_taken
	house_load
	fail
	completed
	cleanup
	Locator 
	 doesn't exist
	size
	get
	clear
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActorByType (6 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_9 Op = 0xb9 Vars = (int, float)


0x0: Push("b4q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call2 0xc4

0x6: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 4
0xa: Call2 0xa6

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, object, int, bool, cvector, cvector, object, object, object, int, bool, cvector, cvector)
0xe: @ Trace(Stack[-15])
0xf: Pop(0)
0x10: Push("place_boy")
0x11: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x13: @ GetMainOutdoorScene(Stack[-7])
0x14: Pop(0)
0x15: PushEmpty(object, object, string, string, string)
0x16: Stack[-4] = Stack[-12]
0x17: Stack[-3] = "pt_b4q02_boy"
0x18: Stack[-2] = "pers_boy"
0x19: Stack[-1] = "b4q02_boy.xml"
0x1a: Call2 0xdc

0x1b: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1c: Pop(5)
0x1d: Push("house5_unoin03r")
0x1e: @ GetSceneByName(Stack[-8], Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-4] = Stack[-12]
0x22: Stack[-3] = "pt_b4q02_samopal"
0x23: Stack[-2] = "scripted_container"
0x24: Stack[-1] = "b4q02_samopal.xml"
0x25: Call2 0xca

0x26: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: PushEmpty(object, object, string, string, string)
0x29: Stack[-4] = Stack[-12]
0x2a: Stack[-3] = "pt_b4q02_samopal_ammo"
0x2b: Stack[-2] = "scripted_container"
0x2c: Stack[-1] = "b4q02_samopal_ammo.xml"
0x2d: Call2 0xca

0x2e: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2f: Pop(5)
0x30: Stack[-7] = 0
0x31: GOTO 0x71

0x32: Push("boy_run")
0x33: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x35: @ GetMainOutdoorScene(Stack[-5])
0x36: Pop(0)
0x37: Stack[-4] = (int) 1
0x38: Push("pt_b4q02_grabitel")
0x39: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3a: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x3b: Pop(1)
0x3c: Pop(0); Push((bool) Stack[-3] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: GOTO 0x49

0x3f: Push("pers_grabitel")
0x40: Push("b4q02_grabitel.xml")
0x41: Push((bool) 1)
0x42: @@ AddStationaryActor(Stack[-9], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x43: Pop(3)
0x44: @@ add(Stack[-6])
0x45: Pop(0)
0x46: Push((int) 1)
0x47: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x48: GOTO 0x38

0x49: @@ GetActor(Stack[-6])
0x4a: Pop(0)
0x4b: Pop(0); Push((bool) Stack[-6] == 0)
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: @@ Remove()
0x4e: Pop(0)
0x4f: GOTO 0x53

0x50: Push("run")
0x51: @ Trigger(Stack[-7], Stack[-1])
0x52: Pop(1)
0x53: Stack[-5] = 0
0x54: Stack[-6] = 0
0x55: GOTO 0x71

0x56: Push("ammo_or_samopal_taken")
0x57: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x59: PushEmpty()
0x5a: Call2 0x103

0x5b: Pop(0)
0x5c: PushEmpty()
0x5d: Call2 0x85

0x5e: Pop(0)
0x5f: GOTO 0x71

0x60: Push("house_load")
0x61: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x71

0x64: Push("fail")
0x65: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: PushEmpty()
0x68: Call2 0x7d

0x69: Pop(0)
0x6a: GOTO 0x71

0x6b: Push("completed")
0x6c: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6e: PushEmpty()
0x6f: Call2 0x85

0x70: Pop(0)
0x71: Return(); Pop(14)

0x72: PushEmpty(int, int)
0x73: Push("b4q02")
0x74: @ GetVariable(Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: Push((int) 1000)
0x77: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x79: PushEmpty()
0x7a: Call2 0x7d

0x7b: Pop(0)
0x7c: Return(); Pop(2)

0x7d: Push("b4q02")
0x7e: Push((int) -1)
0x7f: @ SetVariable(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: PushEmpty()
0x82: Call2 0x8d

0x83: Pop(0)
0x84: Return(); Pop(0)

0x85: Push("b4q02")
0x86: Push((int) 1000)
0x87: @ SetVariable(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: PushEmpty()
0x8a: Call2 0x8d

0x8b: Pop(0)
0x8c: Return(); Pop(0)

0x8d: EventDisable(26)
0x8e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x90: @@ Remove()
0x91: Pop(0)
0x92: Push( Stack[1 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: Push("cleanup")
0x95: @ Trigger(Stack[-1], Stack[-1])
0x96: Pop(1)
0x97: Push( Stack[2 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x99: Push("cleanup")
0x9a: @ Trigger(Stack[-2], Stack[-1])
0x9b: Pop(1)
0x9c: PushEmpty(object)
0x9d: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x9e: Call2 0xee

0x9f: Pop(1)
0xa0: PushEmpty(object)
0xa1: Call2 0xbe

0xa2: Pop(0)
0xa3: @ RemoveActor(Stack[-1])
0xa4: Pop(1)
0xa5: Return(); Pop(0)

0xa6: PushEmpty(float, float)
0xa7: @ GetGameTime(Stack[-1])
0xa8: Pop(0)
0xa9: Push((int) 24)
0xaa: Pop(1); Push(Stack[-4] * Stack[-1]);
0xab: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xad: PushEmpty()
0xae: Call2 0x8d

0xaf: Pop(0)
0xb0: GOTO 0xb8

0xb1: Push((int) 0)
0xb2: Push((int) 24)
0xb3: Pop(1); Push(Stack[-5] * Stack[-1]);
0xb4: @ SetTimeEvent(Stack[-2], Stack[-1])
0xb5: Pop(2)
0xb6: @ Hold()
0xb7: Pop(0)
0xb8: Return(); Pop(2)

0xb9: PushEmpty()
0xba: PushEmpty()
0xbb: Call2 0x72

0xbc: Pop(0)
0xbd: Return(); Pop(0)

0xbe: PushEmpty(object, object)
0xbf: @ self(Stack[-1])
0xc0: Pop(0)
0xc1: Stack[-3] = Stack[-1]
0xc2: Return(); Pop(2)

0xc3: Stack[-1] = 0
0xc4: PushEmpty(object, object)
0xc5: @ CreateObjectVector(Stack[-1])
0xc6: Pop(0)
0xc7: Stack[-3] = Stack[-1]
0xc8: Return(); Pop(2)

0xc9: Stack[-1] = 0
0xca: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xcb: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xcc: Pop(0)
0xcd: Pop(0); Push((bool) Stack[-4] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xcf: Push("Locator ")
0xd0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xd1: Push(" doesn't exist")
0xd2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd3: @ Trace(Stack[-1])
0xd4: Pop(1)
0xd5: Stack[-1] = 0
0xd6: GOTO 0xd9

0xd7: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xd8: Pop(0)
0xd9: Stack[-13] = Stack[-1]
0xda: Return(); Pop(8)

0xdb: Stack[-1] = 0
0xdc: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdd: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xde: Pop(0)
0xdf: Pop(0); Push((bool) Stack[-4] == 0)
0xe0: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe1: Push("Locator ")
0xe2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe3: Push(" doesn't exist")
0xe4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe5: @ Trace(Stack[-1])
0xe6: Pop(1)
0xe7: Stack[-1] = 0
0xe8: GOTO 0xeb

0xe9: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xea: Pop(0)
0xeb: Stack[-13] = Stack[-1]
0xec: Return(); Pop(8)

0xed: Stack[-1] = 0
0xee: PushEmpty(int, int, object, int, int, object)
0xef: Push(Stack[-7])
0xf0: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf1: @@ size(Stack[-3])
0xf2: Pop(0)
0xf3: Stack[-2] = (int) 0
0xf4: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xf5: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf6: @@ get(Stack[-1], Stack[-2])
0xf7: Pop(0)
0xf8: Push(Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfa: @@ Remove()
0xfb: Pop(0)
0xfc: Stack[-1] = 0
0xfd: Push((int) 1)
0xfe: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xff: GOTO 0xf4

0x100: @@ clear()
0x101: Pop(0)
0x102: Return(); Pop(6)

0x103: PushEmpty(object, object)
0x104: Push((int) 215)
0x105: Push((int) 2)
0x106: Push((int) 518578)
0x107: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: PushEmpty(bool, object, int)
0x10a: Stack[-2] = Stack[-4]
0x10b: Stack[-1] = (int) 213
0x10c: Call2 0x11d

0x10d: Pop(3)
0x10e: Return(); Pop(2)

0x10f: Stack[-1] = 0
0x110: PushEmpty(object, object)
0x111: @ GetDiaryRoot(Stack[-1])
0x112: Pop(0)
0x113: Pop(0); Push((bool) Stack[-1] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: Push("Can't retrieve diary root")
0x116: @ Trace(Stack[-1])
0x117: Pop(1)
0x118: Stack[-3] = (bool) 0
0x119: Return(); Pop(2)

0x11a: Stack[-3] = Stack[-1]
0x11b: Return(); Pop(2)

0x11c: Stack[-1] = 0
0x11d: PushEmpty(object, object, int, object, object, int)
0x11e: PushEmpty(object)
0x11f: Call2 0x110

0x120: Stack[-4] = Stack[-1]
0x121: Pop(1)
0x122: @@ Find(Stack[-7], Stack[-2])
0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[-2] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x126: Push("Can't find diary parent with id: ")
0x127: Pop(1); Push(Stack[-1] + Stack[-8]);
0x128: @ Trace(Stack[-1])
0x129: Pop(1)
0x12a: Stack[-9] = (bool) 0
0x12b: Return(); Pop(6)

0x12c: @@ AddChild(Stack[-8])
0x12d: Pop(0)
0x12e: Push((int) 7)
0x12f: @ SendWorldWndMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ GetCategory(Stack[-1])
0x132: Pop(0)
0x133: @ SetDiarySection(Stack[-1])
0x134: Pop(0)
0x135: Stack[-9] = (bool) 0
0x136: Return(); Pop(6)

0x137: Stack[-2] = 0
0x138: Stack[-3] = 0
