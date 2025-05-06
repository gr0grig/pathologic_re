GlobalVarCount = 0

Strings:
	sobor
	cs_d12_sobor_aglaja
	cs_d12_aglaja.xml
	cs_d12_sobor_block
	cs_d12_block.xml
	ForceGeometryLoad
	cs_d12_sobor_aglaja_block.mot
	cs_d12_sobor_klara
	cs_d12_klara.xml
	cs_d12_sobor_klara.mot
	cs_d12_sobor_burah
	cs_d12_burah.xml
	cs_d12_sobor_burah.mot
	cs_d12_sobor_maria
	cs_d12_maria.xml
	cs_d12_sobor_maria.mot
	quest_d12_01
	sobor_cutscene_end
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	d12q01KlaraInSobor
	d12q01BurahInSobor

Import:
	GetSceneByName (2 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	FindActor (2 args)
	self (1 args)
	AddActor (6 args)
	Trigger (2 args)
	SetSepia (2 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x87 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object, object, object)
0x1: Push("sobor")
0x2: @ GetSceneByName(Stack[-8], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Call2 0x8b

0x6: Stack[-7] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty()
0x9: Call2 0xd7

0xa: Pop(0)
0xb: PushEmpty(object)
0xc: Stack[-1] = Stack[-7]
0xd: Call2 0x92

0xe: Pop(1)
0xf: PushEmpty(object, object, string, string)
0x10: Stack[-3] = Stack[-11]
0x11: Stack[-2] = "cs_d12_sobor_aglaja"
0x12: Stack[-1] = "cs_d12_aglaja.xml"
0x13: Call2 0xc3

0x14: Stack[-9] = Stack[-4]
0x15: Pop(4)
0x16: PushEmpty(object, object, string, string)
0x17: Stack[-3] = Stack[-11]
0x18: Stack[-2] = "cs_d12_sobor_block"
0x19: Stack[-1] = "cs_d12_block.xml"
0x1a: Call2 0xc3

0x1b: Stack[-8] = Stack[-4]
0x1c: Pop(4)
0x1d: @@ ForceGeometryLoad()
0x1e: Pop(0)
0x1f: @@ ForceGeometryLoad()
0x20: Pop(0)
0x21: Push("cs_d12_sobor_aglaja_block.mot")
0x22: @ CameraPlay(Stack[-1])
0x23: Pop(1)
0x24: @ CameraWaitForPlayFinish()
0x25: Pop(0)
0x26: Push(Stack[-5])
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: @ RemoveActor(Stack[-5])
0x29: Pop(0)
0x2a: Push(Stack[-4])
0x2b: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2c: @ RemoveActor(Stack[-4])
0x2d: Pop(0)
0x2e: PushEmpty(bool)
0x2f: Call2 0xe1

0x30: Pop(0)
0x31: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x32: PushEmpty(object, object, string, string)
0x33: Stack[-3] = Stack[-11]
0x34: Stack[-2] = "cs_d12_sobor_klara"
0x35: Stack[-1] = "cs_d12_klara.xml"
0x36: Call2 0xc3

0x37: Stack[-7] = Stack[-4]
0x38: Pop(4)
0x39: @@ ForceGeometryLoad()
0x3a: Pop(0)
0x3b: Push("cs_d12_sobor_klara.mot")
0x3c: @ CameraPlay(Stack[-1])
0x3d: Pop(1)
0x3e: @ CameraWaitForPlayFinish()
0x3f: Pop(0)
0x40: Push(Stack[-3])
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: @ RemoveActor(Stack[-3])
0x43: Pop(0)
0x44: Stack[-3] = 0
0x45: PushEmpty(bool)
0x46: Call2 0xe8

0x47: Pop(0)
0x48: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x49: PushEmpty(object, object, string, string)
0x4a: Stack[-3] = Stack[-11]
0x4b: Stack[-2] = "cs_d12_sobor_burah"
0x4c: Stack[-1] = "cs_d12_burah.xml"
0x4d: Call2 0xc3

0x4e: Stack[-6] = Stack[-4]
0x4f: Pop(4)
0x50: @@ ForceGeometryLoad()
0x51: Pop(0)
0x52: Push("cs_d12_sobor_burah.mot")
0x53: @ CameraPlay(Stack[-1])
0x54: Pop(1)
0x55: @ CameraWaitForPlayFinish()
0x56: Pop(0)
0x57: Push(Stack[-2])
0x58: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x59: @ RemoveActor(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-2] = 0
0x5c: PushEmpty(object, object, string, string)
0x5d: Stack[-3] = Stack[-11]
0x5e: Stack[-2] = "cs_d12_sobor_maria"
0x5f: Stack[-1] = "cs_d12_maria.xml"
0x60: Call2 0xc3

0x61: Stack[-5] = Stack[-4]
0x62: Pop(4)
0x63: @@ ForceGeometryLoad()
0x64: Pop(0)
0x65: Push("cs_d12_sobor_maria.mot")
0x66: @ CameraPlay(Stack[-1])
0x67: Pop(1)
0x68: @ CameraWaitForPlayFinish()
0x69: Pop(0)
0x6a: PushEmpty(object)
0x6b: Stack[-1] = Stack[-7]
0x6c: Call2 0xa9

0x6d: Pop(1)
0x6e: PushEmpty()
0x6f: Call2 0xdc

0x70: Pop(0)
0x71: @ CameraSwitchToNormal()
0x72: Pop(0)
0x73: Push(Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: @ RemoveActor(Stack[-1])
0x76: Pop(0)
0x77: PushEmpty(bool, string, string)
0x78: Stack[-2] = "quest_d12_01"
0x79: Stack[-1] = "sobor_cutscene_end"
0x7a: Call2 0xcb

0x7b: Pop(3)
0x7c: PushEmpty(object)
0x7d: Call2 0xbd

0x7e: Pop(0)
0x7f: @ RemoveActor(Stack[-1])
0x80: Pop(1)
0x81: Return(); Pop(14)

0x82: Stack[-1] = 0
0x83: Stack[-4] = 0
0x84: Stack[-5] = 0
0x85: Stack[-6] = 0
0x86: Stack[-7] = 0
0x87: PushEmpty()
0x88: @ CameraSwitchToNormal()
0x89: Pop(0)
0x8a: Return(); Pop(0)

0x8b: PushEmpty(object, object)
0x8c: Push("player")
0x8d: @ FindActor(Stack[-2], Stack[-1])
0x8e: Pop(1)
0x8f: Stack[-3] = Stack[-1]
0x90: Return(); Pop(2)

0x91: Stack[-1] = 0
0x92: PushEmpty(bool, int, bool, int)
0x93: Pop(0); Push((bool) Stack[-5] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Return(); Pop(4)

0x96: Push("noaccess")
0x97: @@ HasProperty(Stack[-1], Stack[-3])
0x98: Pop(1)
0x99: Push(Stack[-2])
0x9a: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9b: Push("noaccess")
0x9c: @@ GetProperty(Stack[-1], Stack[-2])
0x9d: Pop(1)
0x9e: Push("noaccess")
0x9f: Push((int) 1)
0xa0: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa1: @@ SetProperty(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0xa8

0xa4: Push("noaccess")
0xa5: Push((int) 1)
0xa6: @@ SetProperty(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Return(); Pop(4)

0xa9: PushEmpty(int, int)
0xaa: Pop(0); Push((bool) Stack[-3] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Return(); Pop(2)

0xad: Push("noaccess")
0xae: @@ GetProperty(Stack[-1], Stack[-2])
0xaf: Pop(1)
0xb0: Push((int) 1)
0xb1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb3: Push("noaccess")
0xb4: Push((int) 1)
0xb5: Pop(1); Push(Stack[-3] - Stack[-1]);
0xb6: @@ SetProperty(Stack[-2], Stack[-1])
0xb7: Pop(2)
0xb8: GOTO 0xbc

0xb9: Push("noaccess")
0xba: @@ RemoveProperty(Stack[-1])
0xbb: Pop(1)
0xbc: Return(); Pop(2)

0xbd: PushEmpty(object, object)
0xbe: @ self(Stack[-1])
0xbf: Pop(0)
0xc0: Stack[-3] = Stack[-1]
0xc1: Return(); Pop(2)

0xc2: Stack[-1] = 0
0xc3: PushEmpty(object, object)
0xc4: Push(CVector(0.0, 0.0, 0.0))
0xc5: Push(CVector(0.0, 0.0, 1.0))
0xc6: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xc7: Pop(2)
0xc8: Stack[-6] = Stack[-1]
0xc9: Return(); Pop(2)

0xca: Stack[-1] = 0
0xcb: PushEmpty(object, object)
0xcc: @ FindActor(Stack[-1], Stack[-4])
0xcd: Pop(0)
0xce: Pop(0); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: Stack[-5] = (bool) 0
0xd1: Return(); Pop(2)

0xd2: @ Trigger(Stack[-1], Stack[-3])
0xd3: Pop(0)
0xd4: Stack[-5] = (bool) 1
0xd5: Return(); Pop(2)

0xd6: Stack[-1] = 0
0xd7: Push((float)0.5)
0xd8: Push((float)0.886)
0xd9: @ SetSepia(Stack[-2], Stack[-1])
0xda: Pop(2)
0xdb: Return(); Pop(0)

0xdc: Push((int) 0)
0xdd: Push((int) 0)
0xde: @ SetSepia(Stack[-2], Stack[-1])
0xdf: Pop(2)
0xe0: Return(); Pop(0)

0xe1: PushEmpty(int, int)
0xe2: Push("d12q01KlaraInSobor")
0xe3: @ GetVariable(Stack[-1], Stack[-2])
0xe4: Pop(1)
0xe5: Push((int) 0)
0xe6: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xe7: Return(); Pop(2)

0xe8: PushEmpty(int, int)
0xe9: Push("d12q01BurahInSobor")
0xea: @ GetVariable(Stack[-1], Stack[-2])
0xeb: Pop(1)
0xec: Push((int) 0)
0xed: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xee: Return(); Pop(2)

