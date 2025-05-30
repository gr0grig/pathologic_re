GlobalVarCount = 0

Strings:
	cs_b1q01_unosha1
	cs_play_all_trigger.bin
	cs_b1q01_unosha2
	cs_b1q01_worker1
	cs_b1q01_worker2
	cs_b1q01_unosha3
	cs_play_all.bin
	cs_b1q01_unosha4
	cs_b1q01_worker3
	cs_b1q01_worker4
	cs_b1q01_burah1
	cs_b1q01_burah.xml
	cs_b1q01_burah2
	ForceGeometryLoad
	play
	player
	cs_b1q01.mot
	remove
	quest_b1_01
	cutscene_end
	warehouse_notkin
	pt_door1
	GetLocator
	cleanup
	restore
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	attack

Import:
	GetMainOutdoorScene (1 args)
	AddScriptedActor (5 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Trigger (2 args)
	FindActor (2 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	KillTimer (1 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	self (1 args)
	AddActor (6 args)
	PlayGlobalMusic (1 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_7 Op = 0x1c Vars = (int)
		EVENT_23 Op = 0x26 Vars = (object)
		EVENT_32 Op = 0xd7 Vars = ()
		EVENT_26 Op = 0xe3 Vars = (string)
		EVENT_6 Op = 0xff Vars = ()


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: Push("cs_b1q01_unosha1")
0x4: Push("cs_play_all_trigger.bin")
0x5: Push(CVector(0.0, 0.0, 0.0))
0x6: @ AddScriptedActor(Stack[-5], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x7: Pop(3)
0x8: Push("cs_b1q01_unosha2")
0x9: Push("cs_play_all_trigger.bin")
0xa: Push(CVector(0.0, 0.0, 0.0))
0xb: @ AddScriptedActor(Stack[-6], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0xc: Pop(3)
0xd: Push("cs_b1q01_worker1")
0xe: Push("cs_play_all_trigger.bin")
0xf: Push(CVector(0.0, 0.0, 0.0))
0x10: @ AddScriptedActor(Stack[-1], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x11: Pop(3)
0x12: Push("cs_b1q01_worker2")
0x13: Push("cs_play_all_trigger.bin")
0x14: Push(CVector(0.0, 0.0, 0.0))
0x15: @ AddScriptedActor(Stack[-2], Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x16: Pop(3)
0x17: PushEmpty()
0x18: Call2 0xdf

0x19: Pop(0)
0x1a: Return(); Pop(2)

0x1b: Stack[-1] = 0
0x1c: PushEmpty()
0x1d: Push((int) 1)
0x1e: Pop(1); Push((bool) Stack[-1] != Stack[-2])
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: Return(); Pop(0)

0x21: PushEmpty(object)
0x22: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x23: Call2 0x156

0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty(bool, object, object, cvector, cvector, bool, bool, object, object, cvector, cvector, bool)
0x27: @ IsPlayerActor(Stack[-13], Stack[-6])
0x28: Pop(0)
0x29: Pop(0); Push((bool) Stack[-6] == 0)
0x2a: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2b: Return(); Pop(12)

0x2c: Stack[11 + Tasks[-1].StackPointer] = Stack[-13]
0x2d: @ GetMainOutdoorScene(Stack[-5])
0x2e: Pop(0)
0x2f: PushEmpty(object)
0x30: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x31: Call2 0x156

0x32: Pop(1)
0x33: Push((int) 1)
0x34: Push((int) 2)
0x35: @ SetTimer(Stack[-2], Stack[-1])
0x36: Pop(2)
0x37: Push("cs_b1q01_unosha3")
0x38: Push("cs_play_all.bin")
0x39: Push(CVector(0.0, 0.0, 0.0))
0x3a: @ AddScriptedActor(Stack[-7], Stack[-3], Stack[-2], Stack[-8], Stack[-1])
0x3b: Pop(3)
0x3c: Push("cs_b1q01_unosha4")
0x3d: Push("cs_play_all.bin")
0x3e: Push(CVector(0.0, 0.0, 0.0))
0x3f: @ AddScriptedActor(Stack[-8], Stack[-3], Stack[-2], Stack[-8], Stack[-1])
0x40: Pop(3)
0x41: Push("cs_b1q01_worker3")
0x42: Push("cs_play_all.bin")
0x43: Push(CVector(0.0, 0.0, 0.0))
0x44: @ AddScriptedActor(Stack[-3], Stack[-3], Stack[-2], Stack[-8], Stack[-1])
0x45: Pop(3)
0x46: Push("cs_b1q01_worker4")
0x47: Push("cs_play_all.bin")
0x48: Push(CVector(0.0, 0.0, 0.0))
0x49: @ AddScriptedActor(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-1])
0x4a: Pop(3)
0x4b: PushEmpty(object, object, string, string)
0x4c: Stack[-3] = Stack[-9]
0x4d: Stack[-2] = "cs_b1q01_burah1"
0x4e: Stack[-1] = "cs_b1q01_burah.xml"
0x4f: Call2 0x142

0x50: Stack[9 + Tasks[-1].StackPointer] = Stack[-4]
0x51: Pop(4)
0x52: PushEmpty(object, object, string, string)
0x53: Stack[-3] = Stack[-9]
0x54: Stack[-2] = "cs_b1q01_burah2"
0x55: Stack[-1] = "cs_b1q01_burah.xml"
0x56: Call2 0x142

0x57: Stack[10 + Tasks[-1].StackPointer] = Stack[-4]
0x58: Pop(4)
0x59: @@ ForceGeometryLoad()
0x5a: Pop(0)
0x5b: @@ ForceGeometryLoad()
0x5c: Pop(0)
0x5d: @@ ForceGeometryLoad()
0x5e: Pop(0)
0x5f: @@ ForceGeometryLoad()
0x60: Pop(0)
0x61: @@ ForceGeometryLoad()
0x62: Pop(0)
0x63: @@ ForceGeometryLoad()
0x64: Pop(0)
0x65: @@ ForceGeometryLoad()
0x66: Pop(0)
0x67: @@ ForceGeometryLoad()
0x68: Pop(0)
0x69: @@ ForceGeometryLoad()
0x6a: Pop(0)
0x6b: @@ ForceGeometryLoad()
0x6c: Pop(0)
0x6d: Push("play")
0x6e: @ Trigger(Stack[-5], Stack[-1])
0x6f: Pop(1)
0x70: Push("play")
0x71: @ Trigger(Stack[-6], Stack[-1])
0x72: Pop(1)
0x73: Push("play")
0x74: @ Trigger(Stack[-1], Stack[-1])
0x75: Pop(1)
0x76: Push("play")
0x77: @ Trigger(Stack[-2], Stack[-1])
0x78: Pop(1)
0x79: Push("player")
0x7a: @ FindActor(Stack[-5], Stack[-1])
0x7b: Pop(1)
0x7c: PushEmpty()
0x7d: Call2 0x15f

0x7e: Pop(0)
0x7f: PushEmpty(object)
0x80: Stack[-1] = Stack[-5]
0x81: Call2 0x111

0x82: Pop(1)
0x83: Push("cs_b1q01.mot")
0x84: @ CameraPlay(Stack[-1])
0x85: Pop(1)
0x86: @ CameraWaitForPlayFinish()
0x87: Pop(0)
0x88: PushEmpty(object)
0x89: Stack[-1] = Stack[-5]
0x8a: Call2 0x128

0x8b: Pop(1)
0x8c: PushEmpty()
0x8d: Call2 0x164

0x8e: Pop(0)
0x8f: PushEmpty()
0x90: Call2 0xb2

0x91: Pop(0)
0x92: Push( Stack[10 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x94: Push("remove")
0x95: @ Trigger(Stack[-10], Stack[-1])
0x96: Pop(1)
0x97: Stack[10 + Tasks[-1].StackPointer] = 0
0x98: @ CameraSwitchToNormal()
0x99: Pop(0)
0x9a: Push((int) 1)
0x9b: @ KillTimer(Stack[-1])
0x9c: Pop(1)
0x9d: PushEmpty(bool, string, string)
0x9e: Stack[-2] = "quest_b1_01"
0x9f: Stack[-1] = "cutscene_end"
0xa0: Call2 0x14a

0xa1: Pop(3)
0xa2: Push("warehouse_notkin")
0xa3: @ GetSceneByName(Stack[-6], Stack[-1])
0xa4: Pop(1)
0xa5: Push("pt_door1")
0xa6: @@ GetLocator(Stack[-1], Stack[-2], Stack[-4], Stack[-3])
0xa7: Pop(1)
0xa8: @ Teleport(Stack[-4], Stack[-5], Stack[-3], Stack[-2])
0xa9: Pop(0)
0xaa: PushEmpty(object)
0xab: Call2 0x13c

0xac: Pop(0)
0xad: @ RemoveActor(Stack[-1])
0xae: Pop(1)
0xaf: Return(); Pop(12)

0xb0: Stack[-4] = 0
0xb1: Stack[-5] = 0
0xb2: Push( Stack[5 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: @ RemoveActor(Stack[-5])
0xb5: Pop(0)
0xb6: Push( Stack[6 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: @ RemoveActor(Stack[-6])
0xb9: Pop(0)
0xba: Push( Stack[7 + Tasks[-1].StackPointer] )
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: @ RemoveActor(Stack[-7])
0xbd: Pop(0)
0xbe: Push( Stack[8 + Tasks[-1].StackPointer] )
0xbf: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc0: @ RemoveActor(Stack[-8])
0xc1: Pop(0)
0xc2: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc3: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc4: @ RemoveActor(Stack[-1])
0xc5: Pop(0)
0xc6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xc7: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc8: @ RemoveActor(Stack[-2])
0xc9: Pop(0)
0xca: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: @ RemoveActor(Stack[-3])
0xcd: Pop(0)
0xce: Push( Stack[4 + Tasks[-1].StackPointer] )
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: @ RemoveActor(Stack[-4])
0xd1: Pop(0)
0xd2: Push( Stack[9 + Tasks[-1].StackPointer] )
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: @ RemoveActor(Stack[-9])
0xd5: Pop(0)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: Call2 0xb2

0xd9: Pop(0)
0xda: Push( Stack[10 + Tasks[-1].StackPointer] )
0xdb: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdc: @ RemoveActor(Stack[-10])
0xdd: Pop(0)
0xde: Return(); Pop(0)

0xdf: @ Hold()
0xe0: Pop(0)
0xe1: GOTO 0xdf

0xe2: Return(); Pop(0)

0xe3: PushEmpty(bool, bool)
0xe4: Push("cleanup")
0xe5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe8: @ IsLoaded(Stack[-1])
0xe9: Pop(0)
0xea: PushEmpty(bool)
0xeb: Stack[-1] = (bool) 0
0xec: Pop(0); Push((bool) Stack[-2] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(bool)
0xef: Call2 0x10f

0xf0: Pop(0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Stack[-1] = (bool) 1
0xf3: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf4: PushEmpty(object)
0xf5: Call2 0x13c

0xf6: Pop(0)
0xf7: @ RemoveActor(Stack[-1])
0xf8: Pop(1)
0xf9: GOTO 0xfe

0xfa: Push("restore")
0xfb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfd: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xfe: Return(); Pop(2)

0xff: PushEmpty(bool)
0x100: Stack[-1] = (bool) 0
0x101: Push( Stack[0 + Tasks[-1].StackPointer] )
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: PushEmpty(bool)
0x104: Call2 0x10f

0x105: Pop(0)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 1
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: PushEmpty(object)
0x10a: Call2 0x13c

0x10b: Pop(0)
0x10c: @ RemoveActor(Stack[-1])
0x10d: Pop(1)
0x10e: Return(); Pop(0)

0x10f: Stack[-1] = (bool) 1
0x110: Return(); Pop(0)

0x111: PushEmpty(bool, int, bool, int)
0x112: Pop(0); Push((bool) Stack[-5] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: Return(); Pop(4)

0x115: Push("noaccess")
0x116: @@ HasProperty(Stack[-1], Stack[-3])
0x117: Pop(1)
0x118: Push(Stack[-2])
0x119: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11a: Push("noaccess")
0x11b: @@ GetProperty(Stack[-1], Stack[-2])
0x11c: Pop(1)
0x11d: Push("noaccess")
0x11e: Push((int) 1)
0x11f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x120: @@ SetProperty(Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: GOTO 0x127

0x123: Push("noaccess")
0x124: Push((int) 1)
0x125: @@ SetProperty(Stack[-2], Stack[-1])
0x126: Pop(2)
0x127: Return(); Pop(4)

0x128: PushEmpty(int, int)
0x129: Pop(0); Push((bool) Stack[-3] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: Return(); Pop(2)

0x12c: Push("noaccess")
0x12d: @@ GetProperty(Stack[-1], Stack[-2])
0x12e: Pop(1)
0x12f: Push((int) 1)
0x130: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x132: Push("noaccess")
0x133: Push((int) 1)
0x134: Pop(1); Push(Stack[-3] - Stack[-1]);
0x135: @@ SetProperty(Stack[-2], Stack[-1])
0x136: Pop(2)
0x137: GOTO 0x13b

0x138: Push("noaccess")
0x139: @@ RemoveProperty(Stack[-1])
0x13a: Pop(1)
0x13b: Return(); Pop(2)

0x13c: PushEmpty(object, object)
0x13d: @ self(Stack[-1])
0x13e: Pop(0)
0x13f: Stack[-3] = Stack[-1]
0x140: Return(); Pop(2)

0x141: Stack[-1] = 0
0x142: PushEmpty(object, object)
0x143: Push(CVector(0.0, 0.0, 0.0))
0x144: Push(CVector(0.0, 0.0, 1.0))
0x145: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x146: Pop(2)
0x147: Stack[-6] = Stack[-1]
0x148: Return(); Pop(2)

0x149: Stack[-1] = 0
0x14a: PushEmpty(object, object)
0x14b: @ FindActor(Stack[-1], Stack[-4])
0x14c: Pop(0)
0x14d: Pop(0); Push((bool) Stack[-1] == 0)
0x14e: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14f: Stack[-5] = (bool) 0
0x150: Return(); Pop(2)

0x151: @ Trigger(Stack[-1], Stack[-3])
0x152: Pop(0)
0x153: Stack[-5] = (bool) 1
0x154: Return(); Pop(2)

0x155: Stack[-1] = 0
0x156: PushEmpty(bool, bool)
0x157: @ IsPlayerActor(Stack[-3], Stack[-1])
0x158: Pop(0)
0x159: Push(Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15b: Push("attack")
0x15c: @ PlayGlobalMusic(Stack[-1])
0x15d: Pop(1)
0x15e: Return(); Pop(2)

0x15f: Push((float)0.5)
0x160: Push((float)0.886)
0x161: @ SetSepia(Stack[-2], Stack[-1])
0x162: Pop(2)
0x163: Return(); Pop(0)

0x164: Push((int) 0)
0x165: Push((int) 0)
0x166: @ SetSepia(Stack[-2], Stack[-1])
0x167: Pop(2)
0x168: Return(); Pop(0)

