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
		EVENT_9 Op = 0xb5 Vars = (int, float)


0x0: Push("b4q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call2 0xc0

0x6: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 4
0xa: Call2 0xa2

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
0x1a: Call2 0xd8

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
0x25: Call2 0xc6

0x26: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: PushEmpty(object, object, string, string, string)
0x29: Stack[-4] = Stack[-12]
0x2a: Stack[-3] = "pt_b4q02_samopal_ammo"
0x2b: Stack[-2] = "scripted_container"
0x2c: Stack[-1] = "b4q02_samopal_ammo.xml"
0x2d: Call2 0xc6

0x2e: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x2f: Pop(5)
0x30: Stack[-7] = 0
0x31: GOTO 0x6d

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
0x55: GOTO 0x6d

0x56: Push("house_load")
0x57: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x59: PushEmpty()
0x5a: Call2 0xff

0x5b: Pop(0)
0x5c: PushEmpty()
0x5d: Call2 0x81

0x5e: Pop(0)
0x5f: GOTO 0x6d

0x60: Push("fail")
0x61: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x63: PushEmpty()
0x64: Call2 0x79

0x65: Pop(0)
0x66: GOTO 0x6d

0x67: Push("completed")
0x68: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6a: PushEmpty()
0x6b: Call2 0x81

0x6c: Pop(0)
0x6d: Return(); Pop(14)

0x6e: PushEmpty(int, int)
0x6f: Push("b4q02")
0x70: @ GetVariable(Stack[-1], Stack[-2])
0x71: Pop(1)
0x72: Push((int) 1000)
0x73: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x75: PushEmpty()
0x76: Call2 0x79

0x77: Pop(0)
0x78: Return(); Pop(2)

0x79: Push("b4q02")
0x7a: Push((int) -1)
0x7b: @ SetVariable(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: PushEmpty()
0x7e: Call2 0x89

0x7f: Pop(0)
0x80: Return(); Pop(0)

0x81: Push("b4q02")
0x82: Push((int) 1000)
0x83: @ SetVariable(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: PushEmpty()
0x86: Call2 0x89

0x87: Pop(0)
0x88: Return(); Pop(0)

0x89: EventDisable(26)
0x8a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8c: @@ Remove()
0x8d: Pop(0)
0x8e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x8f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x90: Push("cleanup")
0x91: @ Trigger(Stack[-1], Stack[-1])
0x92: Pop(1)
0x93: Push( Stack[2 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x95: Push("cleanup")
0x96: @ Trigger(Stack[-2], Stack[-1])
0x97: Pop(1)
0x98: PushEmpty(object)
0x99: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x9a: Call2 0xea

0x9b: Pop(1)
0x9c: PushEmpty(object)
0x9d: Call2 0xba

0x9e: Pop(0)
0x9f: @ RemoveActor(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(0)

0xa2: PushEmpty(float, float)
0xa3: @ GetGameTime(Stack[-1])
0xa4: Pop(0)
0xa5: Push((int) 24)
0xa6: Pop(1); Push(Stack[-4] * Stack[-1]);
0xa7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x89

0xab: Pop(0)
0xac: GOTO 0xb4

0xad: Push((int) 0)
0xae: Push((int) 24)
0xaf: Pop(1); Push(Stack[-5] * Stack[-1]);
0xb0: @ SetTimeEvent(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: @ Hold()
0xb3: Pop(0)
0xb4: Return(); Pop(2)

0xb5: PushEmpty()
0xb6: PushEmpty()
0xb7: Call2 0x6e

0xb8: Pop(0)
0xb9: Return(); Pop(0)

0xba: PushEmpty(object, object)
0xbb: @ self(Stack[-1])
0xbc: Pop(0)
0xbd: Stack[-3] = Stack[-1]
0xbe: Return(); Pop(2)

0xbf: Stack[-1] = 0
0xc0: PushEmpty(object, object)
0xc1: @ CreateObjectVector(Stack[-1])
0xc2: Pop(0)
0xc3: Stack[-3] = Stack[-1]
0xc4: Return(); Pop(2)

0xc5: Stack[-1] = 0
0xc6: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc7: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xc8: Pop(0)
0xc9: Pop(0); Push((bool) Stack[-4] == 0)
0xca: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcb: Push("Locator ")
0xcc: Pop(1); Push(Stack[-1] + Stack[-12]);
0xcd: Push(" doesn't exist")
0xce: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcf: @ Trace(Stack[-1])
0xd0: Pop(1)
0xd1: Stack[-1] = 0
0xd2: GOTO 0xd5

0xd3: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xd4: Pop(0)
0xd5: Stack[-13] = Stack[-1]
0xd6: Return(); Pop(8)

0xd7: Stack[-1] = 0
0xd8: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xd9: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xda: Pop(0)
0xdb: Pop(0); Push((bool) Stack[-4] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdd: Push("Locator ")
0xde: Pop(1); Push(Stack[-1] + Stack[-12]);
0xdf: Push(" doesn't exist")
0xe0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1: @ Trace(Stack[-1])
0xe2: Pop(1)
0xe3: Stack[-1] = 0
0xe4: GOTO 0xe7

0xe5: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xe6: Pop(0)
0xe7: Stack[-13] = Stack[-1]
0xe8: Return(); Pop(8)

0xe9: Stack[-1] = 0
0xea: PushEmpty(int, int, object, int, int, object)
0xeb: Push(Stack[-7])
0xec: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xed: @@ size(Stack[-3])
0xee: Pop(0)
0xef: Stack[-2] = (int) 0
0xf0: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xf1: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf2: @@ get(Stack[-1], Stack[-2])
0xf3: Pop(0)
0xf4: Push(Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: @@ Remove()
0xf7: Pop(0)
0xf8: Stack[-1] = 0
0xf9: Push((int) 1)
0xfa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xfb: GOTO 0xf0

0xfc: @@ clear()
0xfd: Pop(0)
0xfe: Return(); Pop(6)

0xff: PushEmpty(object, object)
0x100: Push((int) 215)
0x101: Push((int) 2)
0x102: Push((int) 518578)
0x103: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: PushEmpty(bool, object, int)
0x106: Stack[-2] = Stack[-4]
0x107: Stack[-1] = (int) 213
0x108: Call2 0x119

0x109: Pop(3)
0x10a: Return(); Pop(2)

0x10b: Stack[-1] = 0
0x10c: PushEmpty(object, object)
0x10d: @ GetDiaryRoot(Stack[-1])
0x10e: Pop(0)
0x10f: Pop(0); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x111: Push("Can't retrieve diary root")
0x112: @ Trace(Stack[-1])
0x113: Pop(1)
0x114: Stack[-3] = (bool) 0
0x115: Return(); Pop(2)

0x116: Stack[-3] = Stack[-1]
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty(object, object, int, object, object, int)
0x11a: PushEmpty(object)
0x11b: Call2 0x10c

0x11c: Stack[-4] = Stack[-1]
0x11d: Pop(1)
0x11e: @@ Find(Stack[-7], Stack[-2])
0x11f: Pop(0)
0x120: Pop(0); Push((bool) Stack[-2] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: Push("Can't find diary parent with id: ")
0x123: Pop(1); Push(Stack[-1] + Stack[-8]);
0x124: @ Trace(Stack[-1])
0x125: Pop(1)
0x126: Stack[-9] = (bool) 0
0x127: Return(); Pop(6)

0x128: @@ AddChild(Stack[-8])
0x129: Pop(0)
0x12a: Push((int) 7)
0x12b: @ SendWorldWndMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ GetCategory(Stack[-1])
0x12e: Pop(0)
0x12f: @ SetDiarySection(Stack[-1])
0x130: Pop(0)
0x131: Stack[-9] = (bool) 0
0x132: Return(); Pop(6)

0x133: Stack[-2] = 0
0x134: Stack[-3] = 0
