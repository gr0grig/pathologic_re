GlobalVarCount = 0

Strings:
	quest_d12_01
	theater_load
	theater_unload
	Performance
	cs_mask_danko
	cs_mask_danko.xml
	ForceGeometryLoad
	.mot
	nightmask
	.ogg
	NightMasks
	.wmv
	STAT_LOOK
	Day: 
	Before stat 
	After stat 
	ACHIEVEMENT_LOOK
	Achievement Unlocked!!!
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	Hold (0 args)
	SetVariable (2 args)
	AddActor (6 args)
	CameraPlay (1 args)
	PlayGlobalMusic (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	PlayMovie (1 args)
	GetStat (2 args)
	Trace (1 args)
	shift (3 args)
	SetStat (2 args)
	UnlockAchievement (1 args)
	FindActor (2 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0xf
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0x9 Vars = ()


0x0: PushEmpty()
0x1: Call2 0x13

0x2: Pop(0)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_d12_01"
0x5: Stack[-1] = "theater_load"
0x6: Call2 0xb5

0x7: Pop(3)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, string, string)
0xa: Stack[-2] = "quest_d12_01"
0xb: Stack[-1] = "theater_unload"
0xc: Call2 0xb5

0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: @ Hold()
0x10: Pop(0)
0x11: GOTO 0xf

0x12: Return(); Pop(0)

0x13: PushEmpty(int, int, object, object, int, int, int, int, object, object, int, int)
0x14: PushEmpty(bool)
0x15: Call2 0xd2

0x16: Pop(0)
0x17: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x18: PushEmpty(int)
0x19: Call2 0xc1

0x1a: Stack[-7] = Stack[-1]
0x1b: Pop(1)
0x1c: Push("Performance")
0x1d: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1e: Push((int) 1)
0x1f: @ SetVariable(Stack[-2], Stack[-1])
0x20: Pop(2)
0x21: Push("cs_mask_danko")
0x22: PushEmpty(object)
0x23: Call2 0xaf

0x24: Pop(0)
0x25: Push(CVector(0.0, 0.0, 0.0))
0x26: Push(CVector(0.0, 0.0, 1.0))
0x27: Push("cs_mask_danko.xml")
0x28: @ AddActor(Stack[-9], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(5)
0x2a: @@ ForceGeometryLoad()
0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Call2 0x7d

0x2e: Stack[-4] = Stack[-1]
0x2f: Pop(1)
0x30: PushEmpty(object)
0x31: Stack[-1] = Stack[-4]
0x32: Call2 0x84

0x33: Pop(1)
0x34: Push("cs_mask_danko")
0x35: Push((int) 1)
0x36: Pop(1); Push(Stack[-8] - Stack[-1]);
0x37: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38: Push(".mot")
0x39: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a: @ CameraPlay(Stack[-1])
0x3b: Pop(1)
0x3c: Push("nightmask")
0x3d: Push((int) 1)
0x3e: Pop(1); Push(Stack[-8] - Stack[-1]);
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push(".ogg")
0x41: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42: @ PlayGlobalMusic(Stack[-1])
0x43: Pop(1)
0x44: @ CameraWaitForPlayFinish()
0x45: Pop(0)
0x46: Push("")
0x47: @ PlayGlobalMusic(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(object)
0x4a: Stack[-1] = Stack[-4]
0x4b: Call2 0x9b

0x4c: Pop(1)
0x4d: @ CameraSwitchToNormal()
0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-4])
0x50: Pop(0)
0x51: Push("NightMasks")
0x52: Push((int) 1)
0x53: Pop(1); Push(Stack[-8] - Stack[-1]);
0x54: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55: Push(".wmv")
0x56: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57: @ PlayMovie(Stack[-1])
0x58: Pop(1)
0x59: Push("STAT_LOOK")
0x5a: @ GetStat(Stack[-1], Stack[-3])
0x5b: Pop(1)
0x5c: Push("Day: ")
0x5d: Pop(1); Push(Stack[-1] + Stack[-7]);
0x5e: @ Trace(Stack[-1])
0x5f: Pop(1)
0x60: Push("Before stat ")
0x61: Pop(1); Push(Stack[-1] + Stack[-3]);
0x62: @ Trace(Stack[-1])
0x63: Pop(1)
0x64: Push((int) 1)
0x65: Push((int) 1)
0x66: Pop(1); Push(Stack[-8] - Stack[-1]);
0x67: @ shift(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: Stack[-2] = Stack[-2] | Stack[-1]; Pop(0);
0x6a: Push("STAT_LOOK")
0x6b: @ SetStat(Stack[-1], Stack[-3])
0x6c: Pop(1)
0x6d: Push("After stat ")
0x6e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x6f: @ Trace(Stack[-1])
0x70: Pop(1)
0x71: Push((int) 4095)
0x72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: Push("ACHIEVEMENT_LOOK")
0x75: @ UnlockAchievement(Stack[-1])
0x76: Pop(1)
0x77: Push("Achievement Unlocked!!!")
0x78: @ Trace(Stack[-1])
0x79: Pop(1)
0x7a: Stack[-3] = 0
0x7b: Stack[-4] = 0
0x7c: Return(); Pop(12)

0x7d: PushEmpty(object, object)
0x7e: Push("player")
0x7f: @ FindActor(Stack[-2], Stack[-1])
0x80: Pop(1)
0x81: Stack[-3] = Stack[-1]
0x82: Return(); Pop(2)

0x83: Stack[-1] = 0
0x84: PushEmpty(bool, int, bool, int)
0x85: Pop(0); Push((bool) Stack[-5] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Return(); Pop(4)

0x88: Push("noaccess")
0x89: @@ HasProperty(Stack[-1], Stack[-3])
0x8a: Pop(1)
0x8b: Push(Stack[-2])
0x8c: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8d: Push("noaccess")
0x8e: @@ GetProperty(Stack[-1], Stack[-2])
0x8f: Pop(1)
0x90: Push("noaccess")
0x91: Push((int) 1)
0x92: Pop(1); Push(Stack[-3] + Stack[-1]);
0x93: @@ SetProperty(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x9a

0x96: Push("noaccess")
0x97: Push((int) 1)
0x98: @@ SetProperty(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: Return(); Pop(4)

0x9b: PushEmpty(int, int)
0x9c: Pop(0); Push((bool) Stack[-3] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(2)

0x9f: Push("noaccess")
0xa0: @@ GetProperty(Stack[-1], Stack[-2])
0xa1: Pop(1)
0xa2: Push((int) 1)
0xa3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa5: Push("noaccess")
0xa6: Push((int) 1)
0xa7: Pop(1); Push(Stack[-3] - Stack[-1]);
0xa8: @@ SetProperty(Stack[-2], Stack[-1])
0xa9: Pop(2)
0xaa: GOTO 0xae

0xab: Push("noaccess")
0xac: @@ RemoveProperty(Stack[-1])
0xad: Pop(1)
0xae: Return(); Pop(2)

0xaf: PushEmpty(object, object)
0xb0: @ self(Stack[-1])
0xb1: Pop(0)
0xb2: Stack[-3] = Stack[-1]
0xb3: Return(); Pop(2)

0xb4: Stack[-1] = 0
0xb5: PushEmpty(object, object)
0xb6: @ FindActor(Stack[-1], Stack[-4])
0xb7: Pop(0)
0xb8: Pop(0); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-5] = (bool) 0
0xbb: Return(); Pop(2)

0xbc: @ Trigger(Stack[-1], Stack[-3])
0xbd: Pop(0)
0xbe: Stack[-5] = (bool) 1
0xbf: Return(); Pop(2)

0xc0: Stack[-1] = 0
0xc1: PushEmpty(float, float)
0xc2: @ GetGameTime(Stack[-1])
0xc3: Pop(0)
0xc4: Push((int) 1)
0xc5: PushEmpty(int)
0xc6: Push((int) 24)
0xc7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xc8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc9: Return(); Pop(2)

0xca: PushEmpty(float, float)
0xcb: @ GetGameTime(Stack[-1])
0xcc: Pop(0)
0xcd: PushEmpty(int)
0xce: Stack[-1] = Stack[-2]
0xcf: Push((int) 24)
0xd0: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xd1: Return(); Pop(2)

0xd2: PushEmpty(int, int, int, int, int, int)
0xd3: PushEmpty(int)
0xd4: Call2 0xca

0xd5: Stack[-4] = Stack[-1]
0xd6: Pop(1)
0xd7: Push((int) 7)
0xd8: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xd9: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xda: PushEmpty(int)
0xdb: Call2 0xc1

0xdc: Stack[-3] = Stack[-1]
0xdd: Pop(1)
0xde: Push((int) 1)
0xdf: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe1: Push("Performance")
0xe2: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe3: @ GetVariable(Stack[-1], Stack[-2])
0xe4: Pop(1)
0xe5: Push((int) 0)
0xe6: Stack[-8] = Stack[-2] == Stack[-1]; Pop(1);
0xe7: Return(); Pop(6)

0xe8: Stack[-7] = (bool) 0
0xe9: Return(); Pop(6)

