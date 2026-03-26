GlobalVarCount = 0

Strings:
	W:storojka
	W:cs_b1q02_worker
	W:cs_play_all.bin
	W:space
	W:cs_b1q02.mot
	W:pt_cs_player
	A:GetLocator
	W:pt_b1q02_worker
	W:pers_worker
	W:b1q02_worker.xml
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
	W:Locator 
	W: doesn't exist
// @pool_raw:730074006f0072006f006a006b0061000000630073005f00620031007100300032005f0077006f0072006b00650072000000630073005f0070006c00610079005f0061006c006c002e00620069006e000000730070006100630065000000630073005f00620031007100300032002e006d006f0074000000700074005f00630073005f0070006c00610079006500720000004765744c6f6361746f7200700074005f00620031007100300032005f0077006f0072006b0065007200000070006500720073005f0077006f0072006b00650072000000620031007100300032005f0077006f0072006b00650072002e0078006d006c0000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f7065727479004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	GetSceneByName (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	Teleport (4 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x41 Vars = (int)


0x0: PushEmpty(object, object, object, bool, cvector, cvector, object, object, object, bool, cvector, cvector)
0x1: Push("storojka") // @poff=0
0x2: @ GetSceneByName(Stack[-7], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object, object, string, string)
0x5: Stack[-10] = Stack[-3]
0x6: Stack[-2] = "cs_b1q02_worker" // @poff=18
0x7: Stack[-1] = "cs_play_all.bin" // @poff=50
0x8: Call2 0x8f

0x9: Stack[-4] = Stack[-9]
0xa: Pop(4)
0xb: PushEmpty(object)
0xc: Call2 0x45

0xd: Stack[-1] = Stack[-5]
0xe: Pop(1)
0xf: PushEmpty()
0x10: Call2 0x97

0x11: Pop(0)
0x12: PushEmpty(object)
0x13: Stack[-5] = Stack[-1]
0x14: Call2 0x4c

0x15: Pop(1)
0x16: Push("space") // @poff=82
0x17: @ RegisterKeyCallback(Stack[-1])
0x18: Pop(1)
0x19: Push("cs_b1q02.mot") // @poff=94
0x1a: @ CameraPlay(Stack[-1])
0x1b: Pop(1)
0x1c: @ CameraWaitForPlayFinish()
0x1d: Pop(0)
0x1e: Push("space") // @poff=82
0x1f: @ UnregisterKeyCallback(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(object)
0x22: Stack[-5] = Stack[-1]
0x23: Call2 0x63

0x24: Pop(1)
0x25: @ CameraSwitchToNormal()
0x26: Pop(0)
0x27: PushEmpty()
0x28: Call2 0x9c

0x29: Pop(0)
0x2a: Push("pt_cs_player") // @poff=120
0x2b: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=7 // @poff=146
0x2c: Pop(1)
0x2d: @ Teleport(Stack[-4], Stack[-6], Stack[-2], Stack[-1])
0x2e: Pop(0)
0x2f: @ RemoveActor(Stack[-5])
0x30: Pop(0)
0x31: PushEmpty(object, object, string, string, string)
0x32: Stack[-11] = Stack[-4]
0x33: Stack[-3] = "pt_b1q02_worker" // @poff=157
0x34: Stack[-2] = "pers_worker" // @poff=189
0x35: Stack[-1] = "b1q02_worker.xml" // @poff=213
0x36: Call2 0x7d

0x37: Pop(5)
0x38: PushEmpty(object)
0x39: Call2 0x77

0x3a: Pop(0)
0x3b: @ RemoveActor(Stack[-1])
0x3c: Pop(1)
0x3d: Return(); Pop(12)

0x3e: Stack[-4] = 0
0x3f: Stack[-5] = 0
0x40: Stack[-6] = 0
0x41: PushEmpty()
0x42: @ CameraSwitchToNormal()
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(object, object)
0x46: Push("player") // @poff=132
0x47: @ FindActor(Stack[-2], Stack[-1])
0x48: Pop(1)
0x49: Stack[-1] = Stack[-3]
0x4a: Return(); Pop(2)

0x4b: Stack[-1] = 0
0x4c: PushEmpty(bool, int, bool, int)
0x4d: Pop(0); Push((bool) Stack[-5] == 0)
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Return(); Pop(4)

0x50: Push("noaccess") // @poff=247
0x51: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=265
0x52: Pop(1)
0x53: Push(Stack[-2])
0x54: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x55: Push("noaccess") // @poff=247
0x56: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=277
0x57: Pop(1)
0x58: Push("noaccess") // @poff=247
0x59: Push((int) 1)
0x5a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=289
0x5c: Pop(2)
0x5d: GOTO 0x62

0x5e: Push("noaccess") // @poff=247
0x5f: Push((int) 1)
0x60: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=289
0x61: Pop(2)
0x62: Return(); Pop(4)

0x63: PushEmpty(int, int)
0x64: Pop(0); Push((bool) Stack[-3] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Return(); Pop(2)

0x67: Push("noaccess") // @poff=247
0x68: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=277
0x69: Pop(1)
0x6a: Push((int) 1)
0x6b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6d: Push("noaccess") // @poff=247
0x6e: Push((int) 1)
0x6f: Pop(1); Push(Stack[-3] - Stack[-1]);
0x70: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=289
0x71: Pop(2)
0x72: GOTO 0x76

0x73: Push("noaccess") // @poff=247
0x74: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=301
0x75: Pop(1)
0x76: Return(); Pop(2)

0x77: PushEmpty(object, object)
0x78: @ self(Stack[-1])
0x79: Pop(0)
0x7a: Stack[-1] = Stack[-3]
0x7b: Return(); Pop(2)

0x7c: Stack[-1] = 0
0x7d: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7e: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=146
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-4] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: Push("Locator ") // @poff=316
0x83: Pop(1); Push(Stack[-1] + Stack[-12]);
0x84: Push(" doesn't exist") // @poff=334
0x85: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86: @ Trace(Stack[-1])
0x87: Pop(1)
0x88: Stack[-1] = 0
0x89: GOTO 0x8c

0x8a: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x8b: Pop(0)
0x8c: Stack[-1] = Stack[-13]
0x8d: Return(); Pop(8)

0x8e: Stack[-1] = 0
0x8f: PushEmpty(object, object)
0x90: Push(CVector(0.0, 0.0, 0.0))
0x91: Push(CVector(0.0, 0.0, 1.0))
0x92: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: Stack[-1] = Stack[-6]
0x95: Return(); Pop(2)

0x96: Stack[-1] = 0
0x97: Push((float)0.5)
0x98: Push((float)0.8859999775886536)
0x99: @ SetSepia(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: Return(); Pop(0)

0x9c: Push((int) 0)
0x9d: Push((int) 0)
0x9e: @ SetSepia(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: Return(); Pop(0)

