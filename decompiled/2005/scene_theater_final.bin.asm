GlobalVarCount = 0

Strings:
	cs_final_theater_klara
	cs_final_theater_klara.xml
	cs_final_theater_danko
	cs_final_theater_danko.xml
	cs_final_theater_burah
	cs_final_theater_burah.xml
	ForceGeometryLoad
	space
	cs_final_theater.mot
	final_quest_actor
	voices

Import:
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	sync (0 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x46 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object)
0x1: PushEmpty(object, object, string, string)
0x2: PushEmpty(object)
0x3: Call2 0x4a

0x4: Stack[-4] = Stack[-1]
0x5: Pop(1)
0x6: Stack[-2] = "cs_final_theater_klara"
0x7: Stack[-1] = "cs_final_theater_klara.xml"
0x8: Call2 0x50

0x9: Stack[-7] = Stack[-4]
0xa: Pop(4)
0xb: PushEmpty(object, object, string, string)
0xc: PushEmpty(object)
0xd: Call2 0x4a

0xe: Stack[-4] = Stack[-1]
0xf: Pop(1)
0x10: Stack[-2] = "cs_final_theater_danko"
0x11: Stack[-1] = "cs_final_theater_danko.xml"
0x12: Call2 0x50

0x13: Stack[-6] = Stack[-4]
0x14: Pop(4)
0x15: PushEmpty(object, object, string, string)
0x16: PushEmpty(object)
0x17: Call2 0x4a

0x18: Stack[-4] = Stack[-1]
0x19: Pop(1)
0x1a: Stack[-2] = "cs_final_theater_burah"
0x1b: Stack[-1] = "cs_final_theater_burah.xml"
0x1c: Call2 0x50

0x1d: Stack[-5] = Stack[-4]
0x1e: Pop(4)
0x1f: @@ ForceGeometryLoad()
0x20: Pop(0)
0x21: @@ ForceGeometryLoad()
0x22: Pop(0)
0x23: @@ ForceGeometryLoad()
0x24: Pop(0)
0x25: PushEmpty()
0x26: Call2 0x64

0x27: Pop(0)
0x28: Push("space")
0x29: @ RegisterKeyCallback(Stack[-1])
0x2a: Pop(1)
0x2b: Push("cs_final_theater.mot")
0x2c: @ CameraPlay(Stack[-1])
0x2d: Pop(1)
0x2e: @ sync()
0x2f: Pop(0)
0x30: PushEmpty(bool, string, string)
0x31: Stack[-2] = "final_quest_actor"
0x32: Stack[-1] = "voices"
0x33: Call2 0x58

0x34: Pop(3)
0x35: @ CameraWaitForPlayFinish()
0x36: Pop(0)
0x37: Push("space")
0x38: @ UnregisterKeyCallback(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty()
0x3b: Call2 0x69

0x3c: Pop(0)
0x3d: @ CameraSwitchToNormal()
0x3e: Pop(0)
0x3f: @ Hold()
0x40: Pop(0)
0x41: GOTO 0x3f

0x42: Return(); Pop(6)

0x43: Stack[-1] = 0
0x44: Stack[-2] = 0
0x45: Stack[-3] = 0
0x46: PushEmpty()
0x47: @ CameraSwitchToNormal()
0x48: Pop(0)
0x49: Return(); Pop(0)

0x4a: PushEmpty(object, object)
0x4b: @ self(Stack[-1])
0x4c: Pop(0)
0x4d: Stack[-3] = Stack[-1]
0x4e: Return(); Pop(2)

0x4f: Stack[-1] = 0
0x50: PushEmpty(object, object)
0x51: Push(CVector(0.0, 0.0, 0.0))
0x52: Push(CVector(0.0, 0.0, 1.0))
0x53: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x54: Pop(2)
0x55: Stack[-6] = Stack[-1]
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: PushEmpty(object, object)
0x59: @ FindActor(Stack[-1], Stack[-4])
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: Stack[-5] = (bool) 0
0x5e: Return(); Pop(2)

0x5f: @ Trigger(Stack[-1], Stack[-3])
0x60: Pop(0)
0x61: Stack[-5] = (bool) 1
0x62: Return(); Pop(2)

0x63: Stack[-1] = 0
0x64: Push((float)0.5)
0x65: Push((float)0.886)
0x66: @ SetSepia(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Return(); Pop(0)

0x69: Push((int) 0)
0x6a: Push((int) 0)
0x6b: @ SetSepia(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: Return(); Pop(0)

