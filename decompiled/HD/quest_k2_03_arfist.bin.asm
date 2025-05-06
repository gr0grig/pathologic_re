GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	k2q03
	quest_k2_03
	place_danko
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetVariable (2 args)

RunOp = 0x121
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool, bool) Params = 0
		EVENT_0 Op = 0x128 Vars = (object)
		EVENT_26 Op = 0x15d Vars = (string)
		EVENT_6 Op = 0x165 Vars = ()
		EVENT_7 Op = 0x1a6 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x22e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x341

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x33f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x343

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x345

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x32e

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x273

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 525329)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 539404)
0x5a: Push((int) 41334)
0x5b: Push((int) 41333)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 539408)
0x5f: Push((int) 41334)
0x60: Push((int) 41337)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x347

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x285

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x347

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x295

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x2af

0x9f: Pop(0)
0xa0: Push((int) 26698)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x2ea

0xa7: Pop(2)
0xa8: Push((int) 41343)
0xa9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xab: PushEmpty(object, object)
0xac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xae: Call2 0x2ea

0xaf: Pop(2)
0xb0: Push((int) 41344)
0xb1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: PushEmpty(object, object)
0xb4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6: Call2 0x2ea

0xb7: Pop(2)
0xb8: Push((int) 26697)
0xb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xbb: PushEmpty(string)
0xbc: Stack[-1] = "Neutral"
0xbd: Call2 0x84

0xbe: Pop(1)
0xbf: Push((int) 525329)
0xc0: @@ SetMessage(Stack[-1])
0xc1: Pop(1)
0xc2: @@ ClearReplies()
0xc3: Pop(0)
0xc4: Push((int) 539404)
0xc5: Push((int) 41334)
0xc6: Push((int) 41333)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: Push((int) 539408)
0xca: Push((int) 41334)
0xcb: Push((int) 41337)
0xcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd: Pop(3)
0xce: Return(); Pop(0)

0xcf: Push((int) 41334)
0xd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call2 0x84

0xd5: Pop(1)
0xd6: Push((int) 539405)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 539406)
0xdc: Push((int) 41336)
0xdd: Push((int) 41335)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 539409)
0xe1: Push((int) 41336)
0xe2: Push((int) 41339)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Return(); Pop(0)

0xe6: Push((int) 41336)
0xe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Neutral"
0xeb: Call2 0x84

0xec: Pop(1)
0xed: Push((int) 539407)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: Push((int) 525330)
0xf3: Push((int) -1)
0xf4: Push((int) 26698)
0xf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6: Pop(3)
0xf7: Push((int) 539410)
0xf8: Push((int) 41342)
0xf9: Push((int) 41341)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Return(); Pop(0)

0xfd: Push((int) 41342)
0xfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x100: PushEmpty(string)
0x101: Stack[-1] = "Neutral"
0x102: Call2 0x84

0x103: Pop(1)
0x104: Push((int) 539411)
0x105: @@ SetMessage(Stack[-1])
0x106: Pop(1)
0x107: @@ ClearReplies()
0x108: Pop(0)
0x109: Push((int) 539412)
0x10a: Push((int) -1)
0x10b: Push((int) 41343)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: Push((int) 539413)
0x10f: Push((int) -1)
0x110: Push((int) 41344)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x115: PushEmpty(bool)
0x116: Call2 0x347

0x117: Pop(0)
0x118: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x119: @ lshStopAnimation()
0x11a: Pop(0)
0x11b: GOTO 0x11e

0x11c: @ StopAnimation()
0x11d: Pop(0)
0x11e: Return(); Pop(0)

0x11f: GOTO 0x9b

0x120: Return(); Pop(0)

0x121: Stack[7 + Tasks[-1].StackPointer] = (bool)0
0x122: PushEmpty(float, float)
0x123: Stack[-2] = (int) 300
0x124: Stack[-1] = (int) 100
0x125: Call2 0x137

0x126: Pop(2)
0x127: Return(); Pop(0)

0x128: PushEmpty()
0x129: Push( Stack[7 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12b: Return(); Pop(0)

0x12c: PushEmpty()
0x12d: Call2 0x1bd

0x12e: Pop(0)
0x12f: PushEmpty(int, object)
0x130: Stack[-1] = Stack[-3]
0x131: Push(-2, 1); TaskCall(0)
0x132: Call2 0x0

0x133: Pop(-2, 1); TaskReturn
0x134: Pop(2)
0x135: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x136: Return(); Pop(0)

0x137: PushEmpty(float, bool, float, bool)
0x138: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x139: Push((int) 3)
0x13a: @ rand(Stack[-3], Stack[-1])
0x13b: Pop(1)
0x13c: Push((int) 3)
0x13d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x13e: @ Sleep(Stack[-1], Stack[-2])
0x13f: Pop(1)
0x140: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x141: PushEmpty(float, float)
0x142: Stack[-2] = Stack[-8]
0x143: Stack[-1] = Stack[-7]
0x144: Call2 0x17c

0x145: Pop(2)
0x146: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x147: GOTO 0x139

0x148: Return(); Pop(4)

0x149: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x14a: PushEmpty(bool)
0x14b: Stack[-1] = (bool) 0
0x14c: PushEmpty(bool)
0x14d: Call2 0x229

0x14e: Pop(0)
0x14f: Pop(1); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x17a

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 1
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: PushEmpty(object)
0x158: Call2 0x2b6

0x159: Pop(0)
0x15a: @ RemoveActor(Stack[-1])
0x15b: Pop(1)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: Push("cleanup")
0x15f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x161: PushEmpty()
0x162: Call2 0x149

0x163: Pop(0)
0x164: Return(); Pop(0)

0x165: Push( Stack[6 + Tasks[-1].StackPointer] )
0x166: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x167: PushEmpty()
0x168: Call2 0x1bd

0x169: Pop(0)
0x16a: PushEmpty(bool)
0x16b: Stack[-1] = (bool) 0
0x16c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: PushEmpty(bool)
0x16f: Call2 0x17a

0x170: Pop(0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Stack[-1] = (bool) 1
0x173: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x174: PushEmpty(object)
0x175: Call2 0x2b6

0x176: Pop(0)
0x177: @ RemoveActor(Stack[-1])
0x178: Pop(1)
0x179: Return(); Pop(0)

0x17a: Stack[-1] = (bool) 1
0x17b: Return(); Pop(0)

0x17c: PushEmpty()
0x17d: PushEmpty(bool)
0x17e: Call2 0x229

0x17f: Pop(0)
0x180: Pop(1); Push((bool) Stack[-1] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Return(); Pop(0)

0x183: Push("player")
0x184: @ FindActor(Stack[-4], Stack[-1])
0x185: Pop(1)
0x186: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x187: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x188: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x189: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x18a: Push((int) 10)
0x18b: Push((float)1.0)
0x18c: @ SetTimer(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: PushEmpty()
0x18f: Call2 0x1cb

0x190: Pop(0)
0x191: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x193: Push((int) 10)
0x194: @ KillTimer(Stack[-1])
0x195: Pop(1)
0x196: Return(); Pop(0)

0x197: PushEmpty(float, float)
0x198: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-3] = (bool) 0
0x19b: Return(); Pop(2)

0x19c: PushEmpty(float, object)
0x19d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x19e: Call2 0x221

0x19f: Pop(1)
0x1a0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1a4: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1a5: Return(); Pop(2)

0x1a6: PushEmpty()
0x1a7: Push((int) 10)
0x1a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1aa: PushEmpty(bool)
0x1ab: Call2 0x197

0x1ac: Pop(0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1ae: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty(object)
0x1b1: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b2: Call2 0x2a4

0x1b3: Pop(1)
0x1b4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1b5: GOTO 0x1bc

0x1b6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b8: Push("head")
0x1b9: @ UnlookAsync(Stack[-1])
0x1ba: Pop(1)
0x1bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty()
0x1be: Call2 0x21c

0x1bf: Pop(0)
0x1c0: Push((int) 10)
0x1c1: @ KillTimer(Stack[-1])
0x1c2: Pop(1)
0x1c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c5: Push("head")
0x1c6: @ UnlookAsync(Stack[-1])
0x1c7: Pop(1)
0x1c8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1cc: @ WaitForAnimEnd()
0x1cd: Pop(0)
0x1ce: PushEmpty(bool)
0x1cf: Call2 0x229

0x1d0: Pop(0)
0x1d1: Pop(1); Push((bool) Stack[-1] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: Return(); Pop(14)

0x1d4: PushEmpty(int)
0x1d5: Call2 0x2d9

0x1d6: Stack[-8] = Stack[-1]
0x1d7: Pop(1)
0x1d8: Stack[-6] = (int) 0
0x1d9: PushEmpty(bool)
0x1da: Stack[-1] = (bool) 0
0x1db: Push((int) 5)
0x1dc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: PushEmpty(bool)
0x1df: Call2 0x229

0x1e0: Pop(0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = (bool) 1
0x1e3: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x1e4: Push((int) 3)
0x1e5: @ irand(Stack[-6], Stack[-1])
0x1e6: Pop(1)
0x1e7: Push((int) 0)
0x1e8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ea: Push(Stack[-7])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1ec: @ irand(Stack[-4], Stack[-7])
0x1ed: Pop(0)
0x1ee: Push("all")
0x1ef: PushEmpty(string, int)
0x1f0: Stack[-1] = Stack[-7]
0x1f1: Call2 0x2d2

0x1f2: Pop(1)
0x1f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: @ WaitForAnimEnd(Stack[-3])
0x1f6: Pop(0)
0x1f7: Pop(0); Push((bool) Stack[-3] == 0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: GOTO 0x217

0x1fa: GOTO 0x20c

0x1fb: Push((int) 1)
0x1fc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1fe: Push((int) 4)
0x1ff: @ rand(Stack[-3], Stack[-1])
0x200: Pop(1)
0x201: Push((int) 1)
0x202: Pop(1); Push(Stack[-3] + Stack[-1]);
0x203: @ Sleep(Stack[-1], Stack[-2])
0x204: Pop(1)
0x205: Pop(0); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: GOTO 0x217

0x208: GOTO 0x20c

0x209: Push(Stack[-6])
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x217

0x20c: PushEmpty(bool)
0x20d: Call2 0x21a

0x20e: Pop(0)
0x20f: Pop(1); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x217

0x212: @ ResetAAS()
0x213: Pop(0)
0x214: Push((int) 1)
0x215: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x216: GOTO 0x1d9

0x217: @ ResetAAS()
0x218: Pop(0)
0x219: Return(); Pop(14)

0x21a: Stack[-1] = (bool) 1
0x21b: Return(); Pop(0)

0x21c: @ StopAnimation()
0x21d: Pop(0)
0x21e: @ StopGroup0()
0x21f: Pop(0)
0x220: Return(); Pop(0)

0x221: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x222: @ GetPosition(Stack[-3])
0x223: Pop(0)
0x224: @@ GetPosition(Stack[-2])
0x225: Pop(0)
0x226: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x227: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x228: Return(); Pop(6)

0x229: PushEmpty(bool, bool)
0x22a: @ IsLoaded(Stack[-1])
0x22b: Pop(0)
0x22c: Stack[-3] = Stack[-1]
0x22d: Return(); Pop(2)

0x22e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x22f: @@ GetPosition(Stack[-8])
0x230: Pop(0)
0x231: @@ GetEyesHeight(Stack[-9])
0x232: Pop(0)
0x233: Push(CvectorIndex(Stack[-8], 1))
0x234: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x235: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x236: @ GetPosition(Stack[-7])
0x237: Pop(0)
0x238: @ GetEyesHeight(Stack[-9])
0x239: Pop(0)
0x23a: Push(CvectorIndex(Stack[-7], 1))
0x23b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x23c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x23d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x23e: Push(CvectorIndex(Stack[-6], 1))
0x23f: Stack[-1] = (int) 0
0x240: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x241: Pop(0); Push(Stack[-6] | Stack[-6]);
0x242: Pop(1); Push(Sqrt(Stack[-1]))
0x243: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x244: Stack[-5] = -Stack[-6]; Pop(0);
0x245: Pop(0); Push(Stack[-6] * Stack[-19]);
0x246: PushEmpty(cvector, cvector)
0x247: Push(CVector(0.0, 1.0, 0.0))
0x248: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x249: Call2 0x2bc

0x24a: Pop(1)
0x24b: Push((int) 25)
0x24c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x24d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24e: Push(CVector(0.0, 10.0, 0.0))
0x24f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x250: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x251: @ IsOverrideActive(Stack[-2])
0x252: Pop(0)
0x253: Push(Stack[-2])
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: Stack[-21] = (bool) 0
0x256: Return(); Pop(18)

0x257: @ StopWorld()
0x258: Pop(0)
0x259: Push((bool) 1)
0x25a: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x25b: Pop(1)
0x25c: Push(CvectorIndex(Stack[-4], 0))
0x25d: Push(CvectorIndex(Stack[-5], 2))
0x25e: @ Rotate(Stack[-2], Stack[-1])
0x25f: Pop(2)
0x260: PushEmpty(bool)
0x261: Call2 0x347

0x262: Pop(0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x26d

0x265: Push("head")
0x266: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x267: Pop(1)
0x268: Push(Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26a: Push("head")
0x26b: @ LookAsyncCamera(Stack[-1])
0x26c: Pop(1)
0x26d: @ CameraWaitForPlayFinish()
0x26e: Pop(0)
0x26f: @ ResumeWorld()
0x270: Pop(0)
0x271: Stack[-21] = (bool) 1
0x272: Return(); Pop(18)

0x273: PushEmpty(bool, bool)
0x274: Push((bool) 1)
0x275: @ CameraSwitchToNormal(Stack[-1])
0x276: Pop(1)
0x277: PushEmpty(bool)
0x278: Call2 0x347

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x284

0x27c: Push("head")
0x27d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x27e: Pop(1)
0x27f: Push(Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x281: Push("head")
0x282: @ UnlookAsync(Stack[-1])
0x283: Pop(1)
0x284: Return(); Pop(2)

0x285: PushEmpty(bool, float, float, bool, float, float)
0x286: @ lshHasAnimation(Stack[-3], Stack[-7])
0x287: Pop(0)
0x288: Push(Stack[-3])
0x289: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x28b: Pop(0)
0x28c: Push((bool) 0)
0x28d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(1)
0x28f: GOTO 0x294

0x290: Push("Can't find lsh animation : ")
0x291: Pop(1); Push(Stack[-1] + Stack[-8]);
0x292: @ Trace(Stack[-1])
0x293: Pop(1)
0x294: Return(); Pop(6)

0x295: PushEmpty(bool, float, float, bool, float, float)
0x296: @ lshHasAnimation(Stack[-3], Stack[-8])
0x297: Pop(0)
0x298: Push(Stack[-3])
0x299: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x29b: Pop(0)
0x29c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x29d: Pop(0)
0x29e: GOTO 0x2a3

0x29f: Push("Can't find lsh animation : ")
0x2a0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2a1: @ Trace(Stack[-1])
0x2a2: Pop(1)
0x2a3: Return(); Pop(6)

0x2a4: PushEmpty(float, cvector, float, cvector)
0x2a5: @@ GetEyesHeight(Stack[-2])
0x2a6: Pop(0)
0x2a7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2a8: Push(CvectorIndex(Stack[-1], 1))
0x2a9: Stack[-1] = Stack[-3]
0x2aa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ab: Push("head")
0x2ac: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ad: Pop(1)
0x2ae: Return(); Pop(4)

0x2af: PushEmpty(bool)
0x2b0: Call2 0x347

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: @ lshStopSpeech()
0x2b4: Pop(0)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(object, object)
0x2b7: @ self(Stack[-1])
0x2b8: Pop(0)
0x2b9: Stack[-3] = Stack[-1]
0x2ba: Return(); Pop(2)

0x2bb: Stack[-1] = 0
0x2bc: PushEmpty(float, float)
0x2bd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2be: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2bf: Push((float)0.0)
0x2c0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2c3: Return(); Pop(2)

0x2c4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2c5: Return(); Pop(2)

0x2c6: PushEmpty(object, object)
0x2c7: @ FindActor(Stack[-1], Stack[-4])
0x2c8: Pop(0)
0x2c9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-5] = (bool) 0
0x2cc: Return(); Pop(2)

0x2cd: @ Trigger(Stack[-1], Stack[-3])
0x2ce: Pop(0)
0x2cf: Stack[-5] = (bool) 1
0x2d0: Return(); Pop(2)

0x2d1: Stack[-1] = 0
0x2d2: PushEmpty(string, string)
0x2d3: Stack[-1] = "idle"
0x2d4: Push(Stack[-3])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2d7: Stack[-4] = Stack[-1]
0x2d8: Return(); Pop(2)

0x2d9: PushEmpty(int, bool, int, bool)
0x2da: Stack[-2] = (int) 0
0x2db: Push("all")
0x2dc: PushEmpty(string, int)
0x2dd: Stack[-1] = Stack[-5]
0x2de: Call2 0x2d2

0x2df: Pop(1)
0x2e0: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: Pop(0); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2e8

0x2e5: Push((int) 1)
0x2e6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e7: GOTO 0x2db

0x2e8: Stack[-5] = Stack[-2]
0x2e9: Return(); Pop(4)

0x2ea: PushEmpty()
0x2eb: Push("k2q03")
0x2ec: Push((int) 2)
0x2ed: @ SetVariable(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: PushEmpty()
0x2f0: Call2 0x2f8

0x2f1: Pop(0)
0x2f2: PushEmpty(bool, string, string)
0x2f3: Stack[-2] = "quest_k2_03"
0x2f4: Stack[-1] = "place_danko"
0x2f5: Call2 0x2c6

0x2f6: Pop(3)
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(object, object)
0x2f9: Push((int) 478)
0x2fa: Push((int) 2)
0x2fb: Push((int) 527794)
0x2fc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: PushEmpty(bool, object, int)
0x2ff: Stack[-2] = Stack[-4]
0x300: Stack[-1] = (int) 476
0x301: Call2 0x312

0x302: Pop(3)
0x303: Return(); Pop(2)

0x304: Stack[-1] = 0
0x305: PushEmpty(object, object)
0x306: @ GetDiaryRoot(Stack[-1])
0x307: Pop(0)
0x308: Pop(0); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: Push("Can't retrieve diary root")
0x30b: @ Trace(Stack[-1])
0x30c: Pop(1)
0x30d: Stack[-3] = (bool) 0
0x30e: Return(); Pop(2)

0x30f: Stack[-3] = Stack[-1]
0x310: Return(); Pop(2)

0x311: Stack[-1] = 0
0x312: PushEmpty(object, object, int, object, object, int)
0x313: PushEmpty(object)
0x314: Call2 0x305

0x315: Stack[-4] = Stack[-1]
0x316: Pop(1)
0x317: @@ Find(Stack[-7], Stack[-2])
0x318: Pop(0)
0x319: Pop(0); Push((bool) Stack[-2] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31b: Push("Can't find diary parent with id: ")
0x31c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x31d: @ Trace(Stack[-1])
0x31e: Pop(1)
0x31f: Stack[-9] = (bool) 0
0x320: Return(); Pop(6)

0x321: @@ AddChild(Stack[-8])
0x322: Pop(0)
0x323: Push((int) 7)
0x324: @ SendWorldWndMessage(Stack[-1])
0x325: Pop(1)
0x326: @@ GetCategory(Stack[-1])
0x327: Pop(0)
0x328: @ SetDiarySection(Stack[-1])
0x329: Pop(0)
0x32a: Stack[-9] = (bool) 0
0x32b: Return(); Pop(6)

0x32c: Stack[-2] = 0
0x32d: Stack[-3] = 0
0x32e: PushEmpty(int, int)
0x32f: Push("branch")
0x330: @ GetVariable(Stack[-1], Stack[-2])
0x331: Pop(1)
0x332: Push((int) 0)
0x333: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x335: Stack[-3] = (int) 1
0x336: Return(); Pop(2)

0x337: GOTO 0x33d

0x338: Push((int) 1)
0x339: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-3] = (int) 2
0x33c: Return(); Pop(2)

0x33d: Stack[-3] = (int) 3
0x33e: Return(); Pop(2)

0x33f: Stack[-1] = (int) 515556
0x340: Return(); Pop(0)

0x341: Stack[-1] = (int) 503341
0x342: Return(); Pop(0)

0x343: Stack[-1] = "ui/NPC_Citizen3.png"
0x344: Return(); Pop(0)

0x345: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x346: Return(); Pop(0)

0x347: Stack[-1] = (bool) 0
0x348: Return(); Pop(0)

