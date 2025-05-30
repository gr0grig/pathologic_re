GlobalVarCount = 0

Strings:
	cs_k11q01_soldat1
	cs_play_all.bin
	cs_k11q01_soldat2
	cs_k11q01_soldat3
	cs_k11q01_soldat4
	cs_k11q01_soldat5
	cs_k11q01_soldat6
	cs_k11q01_soldat7
	cs_k11q01_soldat8
	cs_k11q01_soldat9
	cs_k11q01_soldat10
	cs_k11q01_klara
	cs_k11q01_klara.xml
	ForceGeometryLoad
	space
	cs_k11q01.mot
	quest_k11_01
	cutscene_end
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	GetMainOutdoorScene (1 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0xb3 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object)
0x1: @ GetMainOutdoorScene(Stack[-13])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string)
0x4: Stack[-3] = Stack[-17]
0x5: Stack[-2] = "cs_k11q01_soldat1"
0x6: Stack[-1] = "cs_play_all.bin"
0x7: Call2 0xf7

0x8: Stack[-16] = Stack[-4]
0x9: Pop(4)
0xa: PushEmpty(object, object, string, string)
0xb: Stack[-3] = Stack[-17]
0xc: Stack[-2] = "cs_k11q01_soldat2"
0xd: Stack[-1] = "cs_play_all.bin"
0xe: Call2 0xf7

0xf: Stack[-15] = Stack[-4]
0x10: Pop(4)
0x11: PushEmpty(object, object, string, string)
0x12: Stack[-3] = Stack[-17]
0x13: Stack[-2] = "cs_k11q01_soldat3"
0x14: Stack[-1] = "cs_play_all.bin"
0x15: Call2 0xf7

0x16: Stack[-14] = Stack[-4]
0x17: Pop(4)
0x18: PushEmpty(object, object, string, string)
0x19: Stack[-3] = Stack[-17]
0x1a: Stack[-2] = "cs_k11q01_soldat4"
0x1b: Stack[-1] = "cs_play_all.bin"
0x1c: Call2 0xf7

0x1d: Stack[-13] = Stack[-4]
0x1e: Pop(4)
0x1f: PushEmpty(object, object, string, string)
0x20: Stack[-3] = Stack[-17]
0x21: Stack[-2] = "cs_k11q01_soldat5"
0x22: Stack[-1] = "cs_play_all.bin"
0x23: Call2 0xf7

0x24: Stack[-12] = Stack[-4]
0x25: Pop(4)
0x26: PushEmpty(object, object, string, string)
0x27: Stack[-3] = Stack[-17]
0x28: Stack[-2] = "cs_k11q01_soldat6"
0x29: Stack[-1] = "cs_play_all.bin"
0x2a: Call2 0xf7

0x2b: Stack[-11] = Stack[-4]
0x2c: Pop(4)
0x2d: PushEmpty(object, object, string, string)
0x2e: Stack[-3] = Stack[-17]
0x2f: Stack[-2] = "cs_k11q01_soldat7"
0x30: Stack[-1] = "cs_play_all.bin"
0x31: Call2 0xf7

0x32: Stack[-10] = Stack[-4]
0x33: Pop(4)
0x34: PushEmpty(object, object, string, string)
0x35: Stack[-3] = Stack[-17]
0x36: Stack[-2] = "cs_k11q01_soldat8"
0x37: Stack[-1] = "cs_play_all.bin"
0x38: Call2 0xf7

0x39: Stack[-9] = Stack[-4]
0x3a: Pop(4)
0x3b: PushEmpty(object, object, string, string)
0x3c: Stack[-3] = Stack[-17]
0x3d: Stack[-2] = "cs_k11q01_soldat9"
0x3e: Stack[-1] = "cs_play_all.bin"
0x3f: Call2 0xf7

0x40: Stack[-8] = Stack[-4]
0x41: Pop(4)
0x42: PushEmpty(object, object, string, string)
0x43: Stack[-3] = Stack[-17]
0x44: Stack[-2] = "cs_k11q01_soldat10"
0x45: Stack[-1] = "cs_play_all.bin"
0x46: Call2 0xf7

0x47: Stack[-7] = Stack[-4]
0x48: Pop(4)
0x49: PushEmpty(object, object, string, string)
0x4a: Stack[-3] = Stack[-17]
0x4b: Stack[-2] = "cs_k11q01_klara"
0x4c: Stack[-1] = "cs_k11q01_klara.xml"
0x4d: Call2 0xef

0x4e: Stack[-6] = Stack[-4]
0x4f: Pop(4)
0x50: @@ ForceGeometryLoad()
0x51: Pop(0)
0x52: @@ ForceGeometryLoad()
0x53: Pop(0)
0x54: @@ ForceGeometryLoad()
0x55: Pop(0)
0x56: @@ ForceGeometryLoad()
0x57: Pop(0)
0x58: @@ ForceGeometryLoad()
0x59: Pop(0)
0x5a: @@ ForceGeometryLoad()
0x5b: Pop(0)
0x5c: @@ ForceGeometryLoad()
0x5d: Pop(0)
0x5e: @@ ForceGeometryLoad()
0x5f: Pop(0)
0x60: @@ ForceGeometryLoad()
0x61: Pop(0)
0x62: @@ ForceGeometryLoad()
0x63: Pop(0)
0x64: @@ ForceGeometryLoad()
0x65: Pop(0)
0x66: PushEmpty(object)
0x67: Call2 0xb7

0x68: Stack[-2] = Stack[-1]
0x69: Pop(1)
0x6a: PushEmpty()
0x6b: Call2 0x10b

0x6c: Pop(0)
0x6d: PushEmpty(object)
0x6e: Stack[-1] = Stack[-2]
0x6f: Call2 0xbe

0x70: Pop(1)
0x71: Push("space")
0x72: @ RegisterKeyCallback(Stack[-1])
0x73: Pop(1)
0x74: Push("cs_k11q01.mot")
0x75: @ CameraPlay(Stack[-1])
0x76: Pop(1)
0x77: @ CameraWaitForPlayFinish()
0x78: Pop(0)
0x79: Push("space")
0x7a: @ UnregisterKeyCallback(Stack[-1])
0x7b: Pop(1)
0x7c: PushEmpty(object)
0x7d: Stack[-1] = Stack[-2]
0x7e: Call2 0xd5

0x7f: Pop(1)
0x80: PushEmpty()
0x81: Call2 0x110

0x82: Pop(0)
0x83: @ CameraSwitchToNormal()
0x84: Pop(0)
0x85: @ RemoveActor(Stack[-12])
0x86: Pop(0)
0x87: @ RemoveActor(Stack[-11])
0x88: Pop(0)
0x89: @ RemoveActor(Stack[-10])
0x8a: Pop(0)
0x8b: @ RemoveActor(Stack[-9])
0x8c: Pop(0)
0x8d: @ RemoveActor(Stack[-8])
0x8e: Pop(0)
0x8f: @ RemoveActor(Stack[-7])
0x90: Pop(0)
0x91: @ RemoveActor(Stack[-6])
0x92: Pop(0)
0x93: @ RemoveActor(Stack[-5])
0x94: Pop(0)
0x95: @ RemoveActor(Stack[-4])
0x96: Pop(0)
0x97: @ RemoveActor(Stack[-3])
0x98: Pop(0)
0x99: @ RemoveActor(Stack[-2])
0x9a: Pop(0)
0x9b: PushEmpty(bool, string, string)
0x9c: Stack[-2] = "quest_k11_01"
0x9d: Stack[-1] = "cutscene_end"
0x9e: Call2 0xff

0x9f: Pop(3)
0xa0: PushEmpty(object)
0xa1: Call2 0xe9

0xa2: Pop(0)
0xa3: @ RemoveActor(Stack[-1])
0xa4: Pop(1)
0xa5: Return(); Pop(26)

0xa6: Stack[-1] = 0
0xa7: Stack[-2] = 0
0xa8: Stack[-3] = 0
0xa9: Stack[-4] = 0
0xaa: Stack[-5] = 0
0xab: Stack[-6] = 0
0xac: Stack[-7] = 0
0xad: Stack[-8] = 0
0xae: Stack[-9] = 0
0xaf: Stack[-10] = 0
0xb0: Stack[-11] = 0
0xb1: Stack[-12] = 0
0xb2: Stack[-13] = 0
0xb3: PushEmpty()
0xb4: @ CameraSwitchToNormal()
0xb5: Pop(0)
0xb6: Return(); Pop(0)

0xb7: PushEmpty(object, object)
0xb8: Push("player")
0xb9: @ FindActor(Stack[-2], Stack[-1])
0xba: Pop(1)
0xbb: Stack[-3] = Stack[-1]
0xbc: Return(); Pop(2)

0xbd: Stack[-1] = 0
0xbe: PushEmpty(bool, int, bool, int)
0xbf: Pop(0); Push((bool) Stack[-5] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Return(); Pop(4)

0xc2: Push("noaccess")
0xc3: @@ HasProperty(Stack[-1], Stack[-3])
0xc4: Pop(1)
0xc5: Push(Stack[-2])
0xc6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc7: Push("noaccess")
0xc8: @@ GetProperty(Stack[-1], Stack[-2])
0xc9: Pop(1)
0xca: Push("noaccess")
0xcb: Push((int) 1)
0xcc: Pop(1); Push(Stack[-3] + Stack[-1]);
0xcd: @@ SetProperty(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: GOTO 0xd4

0xd0: Push("noaccess")
0xd1: Push((int) 1)
0xd2: @@ SetProperty(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: Return(); Pop(4)

0xd5: PushEmpty(int, int)
0xd6: Pop(0); Push((bool) Stack[-3] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Return(); Pop(2)

0xd9: Push("noaccess")
0xda: @@ GetProperty(Stack[-1], Stack[-2])
0xdb: Pop(1)
0xdc: Push((int) 1)
0xdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdf: Push("noaccess")
0xe0: Push((int) 1)
0xe1: Pop(1); Push(Stack[-3] - Stack[-1]);
0xe2: @@ SetProperty(Stack[-2], Stack[-1])
0xe3: Pop(2)
0xe4: GOTO 0xe8

0xe5: Push("noaccess")
0xe6: @@ RemoveProperty(Stack[-1])
0xe7: Pop(1)
0xe8: Return(); Pop(2)

0xe9: PushEmpty(object, object)
0xea: @ self(Stack[-1])
0xeb: Pop(0)
0xec: Stack[-3] = Stack[-1]
0xed: Return(); Pop(2)

0xee: Stack[-1] = 0
0xef: PushEmpty(object, object)
0xf0: Push(CVector(0.0, 0.0, 0.0))
0xf1: Push(CVector(0.0, 0.0, 1.0))
0xf2: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xf3: Pop(2)
0xf4: Stack[-6] = Stack[-1]
0xf5: Return(); Pop(2)

0xf6: Stack[-1] = 0
0xf7: PushEmpty(object, object)
0xf8: Push(CVector(0.0, 0.0, 0.0))
0xf9: Push(CVector(0.0, 0.0, 1.0))
0xfa: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0xfb: Pop(2)
0xfc: Stack[-6] = Stack[-1]
0xfd: Return(); Pop(2)

0xfe: Stack[-1] = 0
0xff: PushEmpty(object, object)
0x100: @ FindActor(Stack[-1], Stack[-4])
0x101: Pop(0)
0x102: Pop(0); Push((bool) Stack[-1] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-5] = (bool) 0
0x105: Return(); Pop(2)

0x106: @ Trigger(Stack[-1], Stack[-3])
0x107: Pop(0)
0x108: Stack[-5] = (bool) 1
0x109: Return(); Pop(2)

0x10a: Stack[-1] = 0
0x10b: Push((float)0.5)
0x10c: Push((float)0.886)
0x10d: @ SetSepia(Stack[-2], Stack[-1])
0x10e: Pop(2)
0x10f: Return(); Pop(0)

0x110: Push((int) 0)
0x111: Push((int) 0)
0x112: @ SetSepia(Stack[-2], Stack[-1])
0x113: Pop(2)
0x114: Return(); Pop(0)

