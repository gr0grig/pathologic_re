GlobalVarCount = 0

Strings:
	d5q03
	completed
	uprava_prison
	cs_uprava_prisoner1
	cs_play_all.bin
	cs_uprava_prisoner2
	cs_uprava_prisoner3
	cs_uprava_prisoner4
	cs_uprava_prisoner5
	ForceGeometryLoad
	player
	space
	cs_uprava_prison1.mot
	fail
	place_prisoners
	uprava_prison@door1
	pt_guard
	pers_birdmask
	d5q03_birdmask.xml
	pt_prisoner1
	pers_unosha
	d5q03_unosha.xml
	add
	pt_prisoner2
	pers_worker
	d5q03_worker.xml
	pt_prisoner3
	pers_wasted_male
	d5q03_wastedmale.xml
	pt_prisoner4
	pers_alkash
	d5q03_alkash.xml
	pt_prisoner5
	pt_prisoner6
	cleanup
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	size
	get
	clear

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	AddScriptedActor (5 args)
	FindActor (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_24 Op = 0xbf Vars = (int)
		EVENT_9 Op = 0x119 Vars = (int, float)


0x0: Push("d5q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call 0x14f

0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 5
0xa: Call 0x106

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object)
0xe: @ Trace(Stack[-19])
0xf: Pop(0)
0x10: Push("completed")
0x11: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x13: Push("uprava_prison")
0x14: @ GetSceneByName(Stack[-10], Stack[-1])
0x15: Pop(1)
0x16: Push("cs_uprava_prisoner1")
0x17: Push("cs_play_all.bin")
0x18: Push(CVector(0.0, 0.0, 0.0))
0x19: @ AddScriptedActor(Stack[-11], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x1a: Pop(3)
0x1b: Push("cs_uprava_prisoner2")
0x1c: Push("cs_play_all.bin")
0x1d: Push(CVector(0.0, 0.0, 0.0))
0x1e: @ AddScriptedActor(Stack[-10], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x1f: Pop(3)
0x20: Push("cs_uprava_prisoner3")
0x21: Push("cs_play_all.bin")
0x22: Push(CVector(0.0, 0.0, 0.0))
0x23: @ AddScriptedActor(Stack[-9], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x24: Pop(3)
0x25: Push("cs_uprava_prisoner4")
0x26: Push("cs_play_all.bin")
0x27: Push(CVector(0.0, 0.0, 0.0))
0x28: @ AddScriptedActor(Stack[-8], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x29: Pop(3)
0x2a: Push("cs_uprava_prisoner5")
0x2b: Push("cs_play_all.bin")
0x2c: Push(CVector(0.0, 0.0, 0.0))
0x2d: @ AddScriptedActor(Stack[-7], Stack[-3], Stack[-2], Stack[-12], Stack[-1])
0x2e: Pop(3)
0x2f: @@ ForceGeometryLoad()
0x30: Pop(0)
0x31: @@ ForceGeometryLoad()
0x32: Pop(0)
0x33: @@ ForceGeometryLoad()
0x34: Pop(0)
0x35: @@ ForceGeometryLoad()
0x36: Pop(0)
0x37: @@ ForceGeometryLoad()
0x38: Pop(0)
0x39: Push("player")
0x3a: @ FindActor(Stack[-4], Stack[-1])
0x3b: Pop(1)
0x3c: PushEmpty(object)
0x3d: Stack[-1] = Stack[-4]
0x3e: Call 0x11e

0x3f: Pop(1)
0x40: Push("space")
0x41: @ RegisterKeyCallback(Stack[-1])
0x42: Pop(1)
0x43: Push("cs_uprava_prison1.mot")
0x44: @ CameraPlay(Stack[-1])
0x45: Pop(1)
0x46: @ CameraWaitForPlayFinish()
0x47: Pop(0)
0x48: Push("space")
0x49: @ UnregisterKeyCallback(Stack[-1])
0x4a: Pop(1)
0x4b: PushEmpty(object)
0x4c: Stack[-1] = Stack[-4]
0x4d: Call 0x135

0x4e: Pop(1)
0x4f: @ RemoveActor(Stack[-8])
0x50: Pop(0)
0x51: @ RemoveActor(Stack[-7])
0x52: Pop(0)
0x53: @ RemoveActor(Stack[-6])
0x54: Pop(0)
0x55: @ RemoveActor(Stack[-5])
0x56: Pop(0)
0x57: @ RemoveActor(Stack[-4])
0x58: Pop(0)
0x59: @ CameraSwitchToNormal()
0x5a: Pop(0)
0x5b: PushEmpty()
0x5c: Call 0xdb

0x5d: Pop(0)
0x5e: Stack[-3] = 0
0x5f: Stack[-4] = 0
0x60: Stack[-5] = 0
0x61: Stack[-6] = 0
0x62: Stack[-7] = 0
0x63: Stack[-8] = 0
0x64: Stack[-9] = 0
0x65: GOTO 0xbe

0x66: Push("fail")
0x67: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x69: PushEmpty()
0x6a: Call 0xce

0x6b: Pop(0)
0x6c: GOTO 0xbe

0x6d: Push("place_prisoners")
0x6e: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0x70: PushEmpty(string, bool)
0x71: Stack[-2] = "uprava_prison@door1"
0x72: Stack[-1] = (bool) 0
0x73: Call 0x167

0x74: Pop(2)
0x75: Push("uprava_prison")
0x76: @ GetSceneByName(Stack[-3], Stack[-1])
0x77: Pop(1)
0x78: PushEmpty(object, object, string, string, string)
0x79: Stack[-4] = Stack[-7]
0x7a: Stack[-3] = "pt_guard"
0x7b: Stack[-2] = "pers_birdmask"
0x7c: Stack[-1] = "d5q03_birdmask.xml"
0x7d: Call 0x155

0x7e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x7f: Pop(5)
0x80: PushEmpty(object, object, string, string, string)
0x81: Stack[-4] = Stack[-7]
0x82: Stack[-3] = "pt_prisoner1"
0x83: Stack[-2] = "pers_unosha"
0x84: Stack[-1] = "d5q03_unosha.xml"
0x85: Call 0x155

0x86: Stack[-6] = Stack[-5]
0x87: Pop(5)
0x88: @@ add(Stack[-1])
0x89: Pop(0)
0x8a: PushEmpty(object, object, string, string, string)
0x8b: Stack[-4] = Stack[-7]
0x8c: Stack[-3] = "pt_prisoner2"
0x8d: Stack[-2] = "pers_worker"
0x8e: Stack[-1] = "d5q03_worker.xml"
0x8f: Call 0x155

0x90: Stack[-6] = Stack[-5]
0x91: Pop(5)
0x92: @@ add(Stack[-1])
0x93: Pop(0)
0x94: PushEmpty(object, object, string, string, string)
0x95: Stack[-4] = Stack[-7]
0x96: Stack[-3] = "pt_prisoner3"
0x97: Stack[-2] = "pers_wasted_male"
0x98: Stack[-1] = "d5q03_wastedmale.xml"
0x99: Call 0x155

0x9a: Stack[-6] = Stack[-5]
0x9b: Pop(5)
0x9c: @@ add(Stack[-1])
0x9d: Pop(0)
0x9e: PushEmpty(object, object, string, string, string)
0x9f: Stack[-4] = Stack[-7]
0xa0: Stack[-3] = "pt_prisoner4"
0xa1: Stack[-2] = "pers_alkash"
0xa2: Stack[-1] = "d5q03_alkash.xml"
0xa3: Call 0x155

0xa4: Stack[-6] = Stack[-5]
0xa5: Pop(5)
0xa6: @@ add(Stack[-1])
0xa7: Pop(0)
0xa8: PushEmpty(object, object, string, string, string)
0xa9: Stack[-4] = Stack[-7]
0xaa: Stack[-3] = "pt_prisoner5"
0xab: Stack[-2] = "pers_worker"
0xac: Stack[-1] = "d5q03_worker.xml"
0xad: Call 0x155

0xae: Stack[-6] = Stack[-5]
0xaf: Pop(5)
0xb0: @@ add(Stack[-1])
0xb1: Pop(0)
0xb2: PushEmpty(object, object, string, string, string)
0xb3: Stack[-4] = Stack[-7]
0xb4: Stack[-3] = "pt_prisoner6"
0xb5: Stack[-2] = "pers_unosha"
0xb6: Stack[-1] = "d5q03_unosha.xml"
0xb7: Call 0x155

0xb8: Stack[-6] = Stack[-5]
0xb9: Pop(5)
0xba: @@ add(Stack[-1])
0xbb: Pop(0)
0xbc: Stack[-1] = 0
0xbd: Stack[-2] = 0
0xbe: Return(); Pop(18)

0xbf: PushEmpty()
0xc0: @ CameraSwitchToNormal()
0xc1: Pop(0)
0xc2: Return(); Pop(0)

0xc3: PushEmpty(int, int)
0xc4: Push("d5q03")
0xc5: @ GetVariable(Stack[-1], Stack[-2])
0xc6: Pop(1)
0xc7: Push((int) 1000)
0xc8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xca: PushEmpty()
0xcb: Call 0xce

0xcc: Pop(0)
0xcd: Return(); Pop(2)

0xce: Push("d5q03")
0xcf: Push((int) -1)
0xd0: @ SetVariable(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: PushEmpty(string, bool)
0xd3: Stack[-2] = "uprava_prison@door1"
0xd4: Stack[-1] = (bool) 1
0xd5: Call 0x167

0xd6: Pop(2)
0xd7: PushEmpty()
0xd8: Call 0xf6

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: PushEmpty(int, int)
0xdc: Push("d5q03")
0xdd: @ GetVariable(Stack[-1], Stack[-2])
0xde: Pop(1)
0xdf: PushEmpty(bool)
0xe0: Stack[-1] = (bool) 0
0xe1: Push((int) 1000)
0xe2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe4: Push((int) -1)
0xe5: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Stack[-1] = (bool) 1
0xe8: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe9: Push("d5q03")
0xea: Push((int) 1000)
0xeb: @ SetVariable(Stack[-2], Stack[-1])
0xec: Pop(2)
0xed: PushEmpty(string, bool)
0xee: Stack[-2] = "uprava_prison@door1"
0xef: Stack[-1] = (bool) 1
0xf0: Call 0x167

0xf1: Pop(2)
0xf2: PushEmpty()
0xf3: Call 0xf6

0xf4: Pop(0)
0xf5: Return(); Pop(2)

0xf6: EventDisable(26)
0xf7: PushEmpty(object)
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call 0x177

0xfa: Pop(1)
0xfb: Push( Stack[1 + Tasks[-1].StackPointer] )
0xfc: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfd: Push("cleanup")
0xfe: @ Trigger(Stack[-1], Stack[-1])
0xff: Pop(1)
0x100: PushEmpty(object)
0x101: Call 0x149

0x102: Pop(0)
0x103: @ RemoveActor(Stack[-1])
0x104: Pop(1)
0x105: Return(); Pop(0)

0x106: PushEmpty(float, float)
0x107: @ GetGameTime(Stack[-1])
0x108: Pop(0)
0x109: Push((int) 24)
0x10a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x10b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10d: PushEmpty()
0x10e: Call 0xf6

0x10f: Pop(0)
0x110: GOTO 0x118

0x111: Push((int) 0)
0x112: Push((int) 24)
0x113: Pop(1); Push(Stack[-5] * Stack[-1]);
0x114: @ SetTimeEvent(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: @ Hold()
0x117: Pop(0)
0x118: Return(); Pop(2)

0x119: PushEmpty()
0x11a: PushEmpty()
0x11b: Call 0xc3

0x11c: Pop(0)
0x11d: Return(); Pop(0)

0x11e: PushEmpty(bool, int, bool, int)
0x11f: Pop(0); Push((bool) Stack[-5] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Return(); Pop(4)

0x122: Push("noaccess")
0x123: @@ HasProperty(Stack[-1], Stack[-3])
0x124: Pop(1)
0x125: Push(Stack[-2])
0x126: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x127: Push("noaccess")
0x128: @@ GetProperty(Stack[-1], Stack[-2])
0x129: Pop(1)
0x12a: Push("noaccess")
0x12b: Push((int) 1)
0x12c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12d: @@ SetProperty(Stack[-2], Stack[-1])
0x12e: Pop(2)
0x12f: GOTO 0x134

0x130: Push("noaccess")
0x131: Push((int) 1)
0x132: @@ SetProperty(Stack[-2], Stack[-1])
0x133: Pop(2)
0x134: Return(); Pop(4)

0x135: PushEmpty(int, int)
0x136: Pop(0); Push((bool) Stack[-3] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Return(); Pop(2)

0x139: Push("noaccess")
0x13a: @@ GetProperty(Stack[-1], Stack[-2])
0x13b: Pop(1)
0x13c: Push((int) 1)
0x13d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13f: Push("noaccess")
0x140: Push((int) 1)
0x141: Pop(1); Push(Stack[-3] - Stack[-1]);
0x142: @@ SetProperty(Stack[-2], Stack[-1])
0x143: Pop(2)
0x144: GOTO 0x148

0x145: Push("noaccess")
0x146: @@ RemoveProperty(Stack[-1])
0x147: Pop(1)
0x148: Return(); Pop(2)

0x149: PushEmpty(object, object)
0x14a: @ self(Stack[-1])
0x14b: Pop(0)
0x14c: Stack[-3] = Stack[-1]
0x14d: Return(); Pop(2)

0x14e: Stack[-1] = 0
0x14f: PushEmpty(object, object)
0x150: @ CreateObjectVector(Stack[-1])
0x151: Pop(0)
0x152: Stack[-3] = Stack[-1]
0x153: Return(); Pop(2)

0x154: Stack[-1] = 0
0x155: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x156: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-4] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15a: Push("Locator ")
0x15b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x15c: Push(" doesn't exist")
0x15d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15e: @ Trace(Stack[-1])
0x15f: Pop(1)
0x160: Stack[-1] = 0
0x161: GOTO 0x164

0x162: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x163: Pop(0)
0x164: Stack[-13] = Stack[-1]
0x165: Return(); Pop(8)

0x166: Stack[-1] = 0
0x167: PushEmpty(object, object)
0x168: @ FindActor(Stack[-1], Stack[-4])
0x169: Pop(0)
0x16a: Pop(0); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16c: Push("Door ")
0x16d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x16e: Push(" not found")
0x16f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x170: @ Trace(Stack[-1])
0x171: Pop(1)
0x172: Push("locked")
0x173: @@ SetProperty(Stack[-1], Stack[-4])
0x174: Pop(1)
0x175: Return(); Pop(2)

0x176: Stack[-1] = 0
0x177: PushEmpty(int, int, object, int, int, object)
0x178: @@ size(Stack[-3])
0x179: Pop(0)
0x17a: Stack[-2] = (int) 0
0x17b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x17c: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x17d: @@ get(Stack[-1], Stack[-2])
0x17e: Pop(0)
0x17f: Push(Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: @ RemoveActor(Stack[-1])
0x182: Pop(0)
0x183: Stack[-1] = 0
0x184: Push((int) 1)
0x185: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x186: GOTO 0x17b

0x187: @@ clear()
0x188: Pop(0)
0x189: Return(); Pop(6)

