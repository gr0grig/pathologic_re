GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	player
	ui/NPC_Aglaja.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)

RunOp = 0xb3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x89 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0xb7 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0xbf

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x12f

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x131

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x11e

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0xf7

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x79

0x48: Pop(1)
0x49: Push((int) 14843)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 14844)
0x4f: Push((int) -1)
0x50: Push((int) 16090)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: Push((int) 14845)
0x54: Push((int) -1)
0x55: Push((int) 16091)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0x5b

0x59: Return(); Pop(0)

0x5a: GOTO 0x43

0x5b: PushEmpty(bool)
0x5c: Call 0x133

0x5d: Pop(0)
0x5e: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5f: @ lshWaitForAnimEnd()
0x60: Pop(0)
0x61: Push( Stack[3 + Tasks[-1].StackPointer] )
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x69

0x64: PushEmpty(string)
0x65: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x66: Call 0xfb

0x67: Pop(1)
0x68: GOTO 0x5f

0x69: GOTO 0x78

0x6a: Push("all")
0x6b: Push("idle")
0x6c: @ PlayAnimation(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: @ WaitForAnimEnd()
0x6f: Pop(0)
0x70: Push( Stack[3 + Tasks[-1].StackPointer] )
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: GOTO 0x78

0x73: Push("all")
0x74: Push("idle")
0x75: @ PlayAnimation(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: GOTO 0x6e

0x78: Return(); Pop(0)

0x79: PushEmpty()
0x7a: PushEmpty(bool)
0x7b: Call 0x133

0x7c: Pop(0)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Return(); Pop(0)

0x80: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Return(); Pop(0)

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[-2]
0x85: Call 0xfb

0x86: Pop(1)
0x87: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: Push((int) 1)
0x8b: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x8c: PushEmpty()
0x8d: Call 0x10d

0x8e: Pop(0)
0x8f: Push((int) 16089)
0x90: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x92: PushEmpty(string)
0x93: Stack[-1] = "Neutral"
0x94: Call 0x79

0x95: Pop(1)
0x96: Push((int) 14843)
0x97: @@ SetMessage(Stack[-1])
0x98: Pop(1)
0x99: @@ ClearReplies()
0x9a: Pop(0)
0x9b: Push((int) 14844)
0x9c: Push((int) -1)
0x9d: Push((int) 16090)
0x9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(3)
0xa0: Push((int) 14845)
0xa1: Push((int) -1)
0xa2: Push((int) 16091)
0xa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4: Pop(3)
0xa5: Return(); Pop(0)

0xa6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa7: PushEmpty(bool)
0xa8: Call 0x133

0xa9: Pop(0)
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: @ lshStopAnimation()
0xac: Pop(0)
0xad: GOTO 0xb0

0xae: @ StopAnimation()
0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: GOTO 0x8a

0xb2: Return(); Pop(0)

0xb3: @ Hold()
0xb4: Pop(0)
0xb5: GOTO 0xb3

0xb6: Return(); Pop(0)

0xb7: PushEmpty()
0xb8: PushEmpty(int, object)
0xb9: Stack[-1] = Stack[-3]
0xba: Push(-2, 1); TaskCall(0)
0xbb: Call 0x0

0xbc: Pop(-2, 1); TaskReturn
0xbd: Pop(2)
0xbe: Return(); Pop(0)

0xbf: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xc0: @@ GetPosition(Stack[-7])
0xc1: Pop(0)
0xc2: @@ GetEyesHeight(Stack[-8])
0xc3: Pop(0)
0xc4: Push(CvectorIndex(Stack[-7], 1))
0xc5: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xc6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc7: @ GetPosition(Stack[-6])
0xc8: Pop(0)
0xc9: @ GetEyesHeight(Stack[-8])
0xca: Pop(0)
0xcb: Push(CvectorIndex(Stack[-6], 1))
0xcc: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xcd: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xce: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xcf: Push(CvectorIndex(Stack[-5], 1))
0xd0: Stack[-1] = (int) 0
0xd1: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xd2: Pop(0); Push(Stack[-5] | Stack[-5]);
0xd3: Pop(1); Push(Sqrt(Stack[-1]))
0xd4: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xd5: Stack[-4] = -Stack[-5]; Pop(0);
0xd6: Push((int) 70)
0xd7: Pop(1); Push(Stack[-6] * Stack[-1]);
0xd8: PushEmpty(cvector, cvector)
0xd9: Push(CVector(0.0, 1.0, 0.0))
0xda: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0xdb: Call 0x114

0xdc: Pop(1)
0xdd: Push((int) 25)
0xde: Pop(2); Push(Stack[-2] * Stack[-1]);
0xdf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe0: Push(CVector(0.0, 10.0, 0.0))
0xe1: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xe2: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xe3: @ IsOverrideActive(Stack[-1])
0xe4: Pop(0)
0xe5: Push(Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe7: Stack[-18] = (bool) 0
0xe8: Return(); Pop(16)

0xe9: @ StopWorld()
0xea: Pop(0)
0xeb: @ CameraTransit(Stack[-2], Stack[-4])
0xec: Pop(0)
0xed: Push(CvectorIndex(Stack[-3], 0))
0xee: Push(CvectorIndex(Stack[-4], 2))
0xef: @ Rotate(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: @ CameraWaitForPlayFinish()
0xf2: Pop(0)
0xf3: @ ResumeWorld()
0xf4: Pop(0)
0xf5: Stack[-18] = (bool) 1
0xf6: Return(); Pop(16)

0xf7: PushEmpty()
0xf8: @ CameraSwitchToNormal()
0xf9: Pop(0)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(float, float, float, float)
0xfc: Push("playing ")
0xfd: Pop(1); Push(Stack[-1] + Stack[-6]);
0xfe: @ Trace(Stack[-1])
0xff: Pop(1)
0x100: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x101: Pop(0)
0x102: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x103: Pop(0)
0x104: Push("start: ")
0x105: Pop(1); Push(Stack[-1] + Stack[-3]);
0x106: @ Trace(Stack[-1])
0x107: Pop(1)
0x108: Push("end: ")
0x109: Pop(1); Push(Stack[-1] + Stack[-2]);
0x10a: @ Trace(Stack[-1])
0x10b: Pop(1)
0x10c: Return(); Pop(4)

0x10d: PushEmpty(bool)
0x10e: Call 0x133

0x10f: Pop(0)
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: @ lshStopSpeech()
0x112: Pop(0)
0x113: Return(); Pop(0)

0x114: PushEmpty(float, float)
0x115: Pop(0); Push(Stack[-3] | Stack[-3]);
0x116: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x117: Push((float)0.0)
0x118: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11b: Return(); Pop(2)

0x11c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11d: Return(); Pop(2)

0x11e: PushEmpty(int, int)
0x11f: Push("player")
0x120: @ GetVariable(Stack[-1], Stack[-2])
0x121: Pop(1)
0x122: Push((int) 0)
0x123: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x125: Stack[-3] = (int) 200001
0x126: Return(); Pop(2)

0x127: GOTO 0x12d

0x128: Push((int) 1)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-3] = (int) 200002
0x12c: Return(); Pop(2)

0x12d: Stack[-3] = (int) 200003
0x12e: Return(); Pop(2)

0x12f: Stack[-1] = (int) 13334
0x130: Return(); Pop(0)

0x131: Stack[-1] = "ui/NPC_Aglaja.png"
0x132: Return(); Pop(0)

0x133: Stack[-1] = (bool) 1
0x134: Return(); Pop(0)

