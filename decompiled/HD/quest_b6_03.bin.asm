GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	init_grave
	crypt2
	pt_b6q03_diary
	scripted_container
	b6q03_item_diary.xml
	b6q03_light_fire
	light_fire.xml
	pt_b6q03_fire
	scripted
	pt_b6q03_agony1
	pers_worker
	agony1_man.xml
	pt_b6q03_agony2
	pers_woman
	agony1_woman.xml
	crypt2_load
	crypt2_unload
	pt_b6q03_bomber1
	pers_bomber
	b6q03_bomber.xml
	pt_b6q03_bomber2
	pt_b6q03_diseased1
	pers_vaxxabit
	vaxxabit_d.xml
	pt_b6q03_diseased2
	pt_b6q03_diseased3
	pers_vaxxabitka
	vaxxabitka_d.xml
	pt_b6q03_diseased4
	diary_taken
	explode
	fail
	completed
	b6q03
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	PlaySound (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActorByType (6 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0xd4 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 6
0x2: Call2 0xc1

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object, object, object)
0x6: @ Trace(Stack[-5])
0x7: Pop(0)
0x8: Push("init_grave")
0x9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0xb: Push("crypt2")
0xc: @ GetSceneByName(Stack[-3], Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-4] = Stack[-7]
0x10: Stack[-3] = "pt_b6q03_diary"
0x11: Stack[-2] = "scripted_container"
0x12: Stack[-1] = "b6q03_item_diary.xml"
0x13: Call2 0xf1

0x14: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x15: Pop(5)
0x16: @ GetMainOutdoorScene(Stack[-2])
0x17: Pop(0)
0x18: Push("b6q03_light_fire")
0x19: Push(CVector(0.0, 0.0, 0.0))
0x1a: Push(CVector(0.0, 0.0, 1.0))
0x1b: Push("light_fire.xml")
0x1c: @ AddActor(Stack[-0], Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x1d: Pop(4)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-4] = Stack[-7]
0x20: Stack[-3] = "pt_b6q03_fire"
0x21: Stack[-2] = "scripted"
0x22: Stack[-1] = "fire.xml"
0x23: Call2 0xf1

0x24: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x25: Pop(5)
0x26: PushEmpty(object, object, string, string, string)
0x27: Stack[-4] = Stack[-7]
0x28: Stack[-3] = "pt_b6q03_agony1"
0x29: Stack[-2] = "pers_worker"
0x2a: Stack[-1] = "agony1_man.xml"
0x2b: Call2 0xdf

0x2c: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x2d: Pop(5)
0x2e: PushEmpty(object, object, string, string, string)
0x2f: Stack[-4] = Stack[-7]
0x30: Stack[-3] = "pt_b6q03_agony2"
0x31: Stack[-2] = "pers_woman"
0x32: Stack[-1] = "agony1_woman.xml"
0x33: Call2 0xdf

0x34: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x35: Pop(5)
0x36: Stack[-2] = 0
0x37: GOTO 0x87

0x38: Push("crypt2_load")
0x39: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: GOTO 0x87

0x3c: Push("crypt2_unload")
0x3d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x3f: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x41: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x42: @ GetMainOutdoorScene(Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-4] = Stack[-6]
0x46: Stack[-3] = "pt_b6q03_bomber1"
0x47: Stack[-2] = "pers_bomber"
0x48: Stack[-1] = "b6q03_bomber.xml"
0x49: Call2 0xdf

0x4a: Pop(5)
0x4b: PushEmpty(object, object, string, string, string)
0x4c: Stack[-4] = Stack[-6]
0x4d: Stack[-3] = "pt_b6q03_bomber2"
0x4e: Stack[-2] = "pers_bomber"
0x4f: Stack[-1] = "b6q03_bomber.xml"
0x50: Call2 0xdf

0x51: Pop(5)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-4] = Stack[-6]
0x54: Stack[-3] = "pt_b6q03_diseased1"
0x55: Stack[-2] = "pers_vaxxabit"
0x56: Stack[-1] = "vaxxabit_d.xml"
0x57: Call2 0xdf

0x58: Pop(5)
0x59: PushEmpty(object, object, string, string, string)
0x5a: Stack[-4] = Stack[-6]
0x5b: Stack[-3] = "pt_b6q03_diseased2"
0x5c: Stack[-2] = "pers_vaxxabit"
0x5d: Stack[-1] = "vaxxabit_d.xml"
0x5e: Call2 0xdf

0x5f: Pop(5)
0x60: PushEmpty(object, object, string, string, string)
0x61: Stack[-4] = Stack[-6]
0x62: Stack[-3] = "pt_b6q03_diseased3"
0x63: Stack[-2] = "pers_vaxxabitka"
0x64: Stack[-1] = "vaxxabitka_d.xml"
0x65: Call2 0xdf

0x66: Pop(5)
0x67: PushEmpty(object, object, string, string, string)
0x68: Stack[-4] = Stack[-6]
0x69: Stack[-3] = "pt_b6q03_diseased4"
0x6a: Stack[-2] = "pers_vaxxabitka"
0x6b: Stack[-1] = "vaxxabitka_d.xml"
0x6c: Call2 0xdf

0x6d: Pop(5)
0x6e: Stack[-1] = 0
0x6f: GOTO 0x87

0x70: Push("diary_taken")
0x71: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x73: PushEmpty()
0x74: Call2 0x103

0x75: Pop(0)
0x76: Push("explode")
0x77: @ PlaySound(Stack[-1])
0x78: Pop(1)
0x79: GOTO 0x87

0x7a: Push("fail")
0x7b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7d: PushEmpty()
0x7e: Call2 0x93

0x7f: Pop(0)
0x80: GOTO 0x87

0x81: Push("completed")
0x82: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x84: PushEmpty()
0x85: Call2 0x9b

0x86: Pop(0)
0x87: Return(); Pop(4)

0x88: PushEmpty(int, int)
0x89: Push("b6q03")
0x8a: @ GetVariable(Stack[-1], Stack[-2])
0x8b: Pop(1)
0x8c: Push((int) 1000)
0x8d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8f: PushEmpty()
0x90: Call2 0x93

0x91: Pop(0)
0x92: Return(); Pop(2)

0x93: Push("b6q03")
0x94: Push((int) -1)
0x95: @ SetVariable(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: PushEmpty()
0x98: Call2 0xa3

0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: Push("b6q03")
0x9c: Push((int) 1000)
0x9d: @ SetVariable(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: PushEmpty()
0xa0: Call2 0xa3

0xa1: Pop(0)
0xa2: Return(); Pop(0)

0xa3: EventDisable(26)
0xa4: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: @ RemoveActor(Stack[-1])
0xa7: Pop(0)
0xa8: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xaa: @ RemoveActor(Stack[-0])
0xab: Pop(0)
0xac: Push( Stack[2 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xae: Push("cleanup")
0xaf: @ Trigger(Stack[-2], Stack[-1])
0xb0: Pop(1)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb3: Push("cleanup")
0xb4: @ Trigger(Stack[-3], Stack[-1])
0xb5: Pop(1)
0xb6: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: Push("cleanup")
0xb9: @ Trigger(Stack[-4], Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(object)
0xbc: Call2 0xd9

0xbd: Pop(0)
0xbe: @ RemoveActor(Stack[-1])
0xbf: Pop(1)
0xc0: Return(); Pop(0)

0xc1: PushEmpty(float, float)
0xc2: @ GetGameTime(Stack[-1])
0xc3: Pop(0)
0xc4: Push((int) 24)
0xc5: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0xa3

0xca: Pop(0)
0xcb: GOTO 0xd3

0xcc: Push((int) 0)
0xcd: Push((int) 24)
0xce: Pop(1); Push(Stack[-5] * Stack[-1]);
0xcf: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: @ Hold()
0xd2: Pop(0)
0xd3: Return(); Pop(2)

0xd4: PushEmpty()
0xd5: PushEmpty()
0xd6: Call2 0x88

0xd7: Pop(0)
0xd8: Return(); Pop(0)

0xd9: PushEmpty(object, object)
0xda: @ self(Stack[-1])
0xdb: Pop(0)
0xdc: Stack[-3] = Stack[-1]
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe0: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe1: Pop(0)
0xe2: Pop(0); Push((bool) Stack[-4] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe4: Push("Locator ")
0xe5: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe6: Push(" doesn't exist")
0xe7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8: @ Trace(Stack[-1])
0xe9: Pop(1)
0xea: Stack[-1] = 0
0xeb: GOTO 0xee

0xec: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xed: Pop(0)
0xee: Stack[-13] = Stack[-1]
0xef: Return(); Pop(8)

0xf0: Stack[-1] = 0
0xf1: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xf2: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xf3: Pop(0)
0xf4: Pop(0); Push((bool) Stack[-4] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf6: Push("Locator ")
0xf7: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf8: Push(" doesn't exist")
0xf9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfa: @ Trace(Stack[-1])
0xfb: Pop(1)
0xfc: Stack[-1] = 0
0xfd: GOTO 0x100

0xfe: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xff: Pop(0)
0x100: Stack[-13] = Stack[-1]
0x101: Return(); Pop(8)

0x102: Stack[-1] = 0
0x103: PushEmpty(object, object)
0x104: Push((int) 278)
0x105: Push((int) 2)
0x106: Push((int) 521339)
0x107: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: PushEmpty(bool, object, int)
0x10a: Stack[-2] = Stack[-4]
0x10b: Stack[-1] = (int) 276
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
