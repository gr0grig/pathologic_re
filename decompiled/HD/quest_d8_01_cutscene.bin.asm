GlobalVarCount = 0

Strings:
	boiny
	cs_d8q01_bakalavr
	cs_d8q01_bakalavr.xml
	add
	cs_d8q01_butcher1
	cs_play_all.bin
	cs_d8q01_butcher2
	cs_d8q01_butcher3
	cs_d8q01_butcher4
	cs_d8q01_butcher5
	size
	get
	ForceGeometryLoad
	cs_d8q01_soldier1
	cs_d8q01_soldier2
	cs_d8q01_soldier3
	cs_d8q01_soldier4
	cs_d8q01_Block
	cs_d8q01_Block.xml
	space
	cs_d8q01.mot
	quest_d8_01
	completed
	uprava_admin
	uprava_admin_army_danko.isc
	pt_d8q01_boiny_teleport
	GetLocator
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	clear

Import:
	GetSceneByName (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	sync (0 args)
	ReplaceScene (2 args)
	Teleport (4 args)
	GetGameTime (1 args)
	AdvanceGameTime (1 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0xb9 Vars = (int)


0x0: PushEmpty(object, object, int, int, object, object, bool, cvector, cvector, float, object, object, int, int, object, object, bool, cvector, cvector, float)
0x1: Push("boiny")
0x2: @ GetSceneByName(Stack[-11], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Call2 0xf5

0x6: Stack[-10] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(object, object, string, string)
0x9: Stack[-3] = Stack[-14]
0xa: Stack[-2] = "cs_d8q01_bakalavr"
0xb: Stack[-1] = "cs_d8q01_bakalavr.xml"
0xc: Call2 0xfb

0xd: Pop(3)
0xe: @@ add(Stack[-1])
0xf: Pop(1)
0x10: PushEmpty(object, object, string, string)
0x11: Stack[-3] = Stack[-14]
0x12: Stack[-2] = "cs_d8q01_butcher1"
0x13: Stack[-1] = "cs_play_all.bin"
0x14: Call2 0x103

0x15: Pop(3)
0x16: @@ add(Stack[-1])
0x17: Pop(1)
0x18: PushEmpty(object, object, string, string)
0x19: Stack[-3] = Stack[-14]
0x1a: Stack[-2] = "cs_d8q01_butcher2"
0x1b: Stack[-1] = "cs_play_all.bin"
0x1c: Call2 0x103

0x1d: Pop(3)
0x1e: @@ add(Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object, object, string, string)
0x21: Stack[-3] = Stack[-14]
0x22: Stack[-2] = "cs_d8q01_butcher3"
0x23: Stack[-1] = "cs_play_all.bin"
0x24: Call2 0x103

0x25: Pop(3)
0x26: @@ add(Stack[-1])
0x27: Pop(1)
0x28: PushEmpty(object, object, string, string)
0x29: Stack[-3] = Stack[-14]
0x2a: Stack[-2] = "cs_d8q01_butcher4"
0x2b: Stack[-1] = "cs_play_all.bin"
0x2c: Call2 0x103

0x2d: Pop(3)
0x2e: @@ add(Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(object, object, string, string)
0x31: Stack[-3] = Stack[-14]
0x32: Stack[-2] = "cs_d8q01_butcher5"
0x33: Stack[-1] = "cs_play_all.bin"
0x34: Call2 0x103

0x35: Pop(3)
0x36: @@ add(Stack[-1])
0x37: Pop(1)
0x38: @@ size(Stack[-8])
0x39: Pop(0)
0x3a: Stack[-7] = (int) 0
0x3b: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x3c: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3d: @@ get(Stack[-6], Stack[-7])
0x3e: Pop(0)
0x3f: @@ ForceGeometryLoad()
0x40: Pop(0)
0x41: Stack[-6] = 0
0x42: Push((int) 1)
0x43: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x44: GOTO 0x3b

0x45: PushEmpty(object, object, string, string)
0x46: Stack[-3] = Stack[-14]
0x47: Stack[-2] = "cs_d8q01_soldier1"
0x48: Stack[-1] = "cs_play_all.bin"
0x49: Call2 0x103

0x4a: Pop(3)
0x4b: @@ add(Stack[-1])
0x4c: Pop(1)
0x4d: PushEmpty(object, object, string, string)
0x4e: Stack[-3] = Stack[-14]
0x4f: Stack[-2] = "cs_d8q01_soldier2"
0x50: Stack[-1] = "cs_play_all.bin"
0x51: Call2 0x103

0x52: Pop(3)
0x53: @@ add(Stack[-1])
0x54: Pop(1)
0x55: PushEmpty(object, object, string, string)
0x56: Stack[-3] = Stack[-14]
0x57: Stack[-2] = "cs_d8q01_soldier3"
0x58: Stack[-1] = "cs_play_all.bin"
0x59: Call2 0x103

0x5a: Pop(3)
0x5b: @@ add(Stack[-1])
0x5c: Pop(1)
0x5d: PushEmpty(object, object, string, string)
0x5e: Stack[-3] = Stack[-14]
0x5f: Stack[-2] = "cs_d8q01_soldier4"
0x60: Stack[-1] = "cs_play_all.bin"
0x61: Call2 0x103

0x62: Pop(3)
0x63: @@ add(Stack[-1])
0x64: Pop(1)
0x65: PushEmpty(object, object, string, string)
0x66: Stack[-3] = Stack[-14]
0x67: Stack[-2] = "cs_d8q01_Block"
0x68: Stack[-1] = "cs_d8q01_Block.xml"
0x69: Call2 0xfb

0x6a: Pop(3)
0x6b: @@ add(Stack[-1])
0x6c: Pop(1)
0x6d: PushEmpty(object)
0x6e: Call2 0xbd

0x6f: Stack[-6] = Stack[-1]
0x70: Pop(1)
0x71: PushEmpty()
0x72: Call2 0x12c

0x73: Pop(0)
0x74: PushEmpty(object)
0x75: Stack[-1] = Stack[-6]
0x76: Call2 0xc4

0x77: Pop(1)
0x78: Push("space")
0x79: @ RegisterKeyCallback(Stack[-1])
0x7a: Pop(1)
0x7b: Push("cs_d8q01.mot")
0x7c: @ CameraPlay(Stack[-1])
0x7d: Pop(1)
0x7e: @ CameraWaitForPlayFinish()
0x7f: Pop(0)
0x80: Push("space")
0x81: @ UnregisterKeyCallback(Stack[-1])
0x82: Pop(1)
0x83: PushEmpty(object)
0x84: Stack[-1] = Stack[-6]
0x85: Call2 0xdb

0x86: Pop(1)
0x87: PushEmpty()
0x88: Call2 0x131

0x89: Pop(0)
0x8a: @ CameraSwitchToNormal()
0x8b: Pop(0)
0x8c: PushEmpty(object)
0x8d: Stack[-1] = Stack[-10]
0x8e: Call2 0x117

0x8f: Pop(1)
0x90: Stack[-9] = 0
0x91: PushEmpty(bool, string, string)
0x92: Stack[-2] = "quest_d8_01"
0x93: Stack[-1] = "completed"
0x94: Call2 0x10b

0x95: Pop(3)
0x96: @ sync()
0x97: Pop(0)
0x98: Push("uprava_admin")
0x99: @ GetSceneByName(Stack[-11], Stack[-1])
0x9a: Pop(1)
0x9b: Push("uprava_admin_army_danko.isc")
0x9c: @ ReplaceScene(Stack[-11], Stack[-1])
0x9d: Pop(1)
0x9e: @ sync()
0x9f: Pop(0)
0xa0: Push("uprava_admin")
0xa1: @ GetSceneByName(Stack[-11], Stack[-1])
0xa2: Pop(1)
0xa3: Push("pt_d8q01_boiny_teleport")
0xa4: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0xa5: Pop(1)
0xa6: @ Teleport(Stack[-5], Stack[-10], Stack[-3], Stack[-2])
0xa7: Pop(0)
0xa8: @ GetGameTime(Stack[-1])
0xa9: Pop(0)
0xaa: Push((int) 206)
0xab: Pop(1); Push(Stack[-1] - Stack[-2]);
0xac: @ AdvanceGameTime(Stack[-1])
0xad: Pop(1)
0xae: @ sync()
0xaf: Pop(0)
0xb0: PushEmpty(object)
0xb1: Call2 0xef

0xb2: Pop(0)
0xb3: @ RemoveActor(Stack[-1])
0xb4: Pop(1)
0xb5: Return(); Pop(20)

0xb6: Stack[-5] = 0
0xb7: Stack[-9] = 0
0xb8: Stack[-10] = 0
0xb9: PushEmpty()
0xba: @ CameraSwitchToNormal()
0xbb: Pop(0)
0xbc: Return(); Pop(0)

0xbd: PushEmpty(object, object)
0xbe: Push("player")
0xbf: @ FindActor(Stack[-2], Stack[-1])
0xc0: Pop(1)
0xc1: Stack[-3] = Stack[-1]
0xc2: Return(); Pop(2)

0xc3: Stack[-1] = 0
0xc4: PushEmpty(bool, int, bool, int)
0xc5: Pop(0); Push((bool) Stack[-5] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc7: Return(); Pop(4)

0xc8: Push("noaccess")
0xc9: @@ HasProperty(Stack[-1], Stack[-3])
0xca: Pop(1)
0xcb: Push(Stack[-2])
0xcc: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xcd: Push("noaccess")
0xce: @@ GetProperty(Stack[-1], Stack[-2])
0xcf: Pop(1)
0xd0: Push("noaccess")
0xd1: Push((int) 1)
0xd2: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd3: @@ SetProperty(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: GOTO 0xda

0xd6: Push("noaccess")
0xd7: Push((int) 1)
0xd8: @@ SetProperty(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: Return(); Pop(4)

0xdb: PushEmpty(int, int)
0xdc: Pop(0); Push((bool) Stack[-3] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xde: Return(); Pop(2)

0xdf: Push("noaccess")
0xe0: @@ GetProperty(Stack[-1], Stack[-2])
0xe1: Pop(1)
0xe2: Push((int) 1)
0xe3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe5: Push("noaccess")
0xe6: Push((int) 1)
0xe7: Pop(1); Push(Stack[-3] - Stack[-1]);
0xe8: @@ SetProperty(Stack[-2], Stack[-1])
0xe9: Pop(2)
0xea: GOTO 0xee

0xeb: Push("noaccess")
0xec: @@ RemoveProperty(Stack[-1])
0xed: Pop(1)
0xee: Return(); Pop(2)

0xef: PushEmpty(object, object)
0xf0: @ self(Stack[-1])
0xf1: Pop(0)
0xf2: Stack[-3] = Stack[-1]
0xf3: Return(); Pop(2)

0xf4: Stack[-1] = 0
0xf5: PushEmpty(object, object)
0xf6: @ CreateObjectVector(Stack[-1])
0xf7: Pop(0)
0xf8: Stack[-3] = Stack[-1]
0xf9: Return(); Pop(2)

0xfa: Stack[-1] = 0
0xfb: PushEmpty(object, object)
0xfc: Push(CVector(0.0, 0.0, 0.0))
0xfd: Push(CVector(0.0, 0.0, 1.0))
0xfe: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xff: Pop(2)
0x100: Stack[-6] = Stack[-1]
0x101: Return(); Pop(2)

0x102: Stack[-1] = 0
0x103: PushEmpty(object, object)
0x104: Push(CVector(0.0, 0.0, 0.0))
0x105: Push(CVector(0.0, 0.0, 1.0))
0x106: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x107: Pop(2)
0x108: Stack[-6] = Stack[-1]
0x109: Return(); Pop(2)

0x10a: Stack[-1] = 0
0x10b: PushEmpty(object, object)
0x10c: @ FindActor(Stack[-1], Stack[-4])
0x10d: Pop(0)
0x10e: Pop(0); Push((bool) Stack[-1] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: Stack[-5] = (bool) 0
0x111: Return(); Pop(2)

0x112: @ Trigger(Stack[-1], Stack[-3])
0x113: Pop(0)
0x114: Stack[-5] = (bool) 1
0x115: Return(); Pop(2)

0x116: Stack[-1] = 0
0x117: PushEmpty(int, int, object, int, int, object)
0x118: Push(Stack[-7])
0x119: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x11a: @@ size(Stack[-3])
0x11b: Pop(0)
0x11c: Stack[-2] = (int) 0
0x11d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x11e: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11f: @@ get(Stack[-1], Stack[-2])
0x120: Pop(0)
0x121: Push(Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: @ RemoveActor(Stack[-1])
0x124: Pop(0)
0x125: Stack[-1] = 0
0x126: Push((int) 1)
0x127: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x128: GOTO 0x11d

0x129: @@ clear()
0x12a: Pop(0)
0x12b: Return(); Pop(6)

0x12c: Push((float)0.5)
0x12d: Push((float)0.886)
0x12e: @ SetSepia(Stack[-2], Stack[-1])
0x12f: Pop(2)
0x130: Return(); Pop(0)

0x131: Push((int) 0)
0x132: Push((int) 0)
0x133: @ SetSepia(Stack[-2], Stack[-1])
0x134: Pop(2)
0x135: Return(); Pop(0)

