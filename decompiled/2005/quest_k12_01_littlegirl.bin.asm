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
	ook12Littlegirl1
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	HasAnimation (3 args)

RunOp = 0x193
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x199 Vars = (object)
		EVENT_26 Op = 0x1ca Vars = (string)
		EVENT_6 Op = 0x1d2 Vars = ()
		EVENT_7 Op = 0x213 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x29b

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x35b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x359

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x35d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x35f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x348

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
0x41: Call2 0x2df

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 542769)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x33c

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 542770)
0x5f: Push((int) 45193)
0x60: Push((int) 45191)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 542771)
0x64: Push((int) -1)
0x65: Push((int) 45192)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 542790)
0x69: Push((int) -1)
0x6a: Push((int) 45212)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x361

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x2f0

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x361

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x300

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x31a

0xa9: Pop(0)
0xaa: Push((int) 45191)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x336

0xb1: Pop(2)
0xb2: Push((int) 45190)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral"
0xb7: Call2 0x8e

0xb8: Pop(1)
0xb9: Push((int) 542769)
0xba: @@ SetMessage(Stack[-1])
0xbb: Pop(1)
0xbc: @@ ClearReplies()
0xbd: Pop(0)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x33c

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 542770)
0xc4: Push((int) 45193)
0xc5: Push((int) 45191)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 542771)
0xc9: Push((int) -1)
0xca: Push((int) 45192)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 542790)
0xce: Push((int) -1)
0xcf: Push((int) 45212)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 45193)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 542772)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 542773)
0xe0: Push((int) 45195)
0xe1: Push((int) 45194)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 542775)
0xe5: Push((int) 45197)
0xe6: Push((int) 45196)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 45197)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 542776)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 542777)
0xf7: Push((int) 45199)
0xf8: Push((int) 45198)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: Push((int) 45199)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x8e

0x102: Pop(1)
0x103: Push((int) 542778)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 542787)
0x109: Push((int) 45209)
0x10a: Push((int) 45208)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 45209)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call2 0x8e

0x114: Pop(1)
0x115: Push((int) 542788)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 542789)
0x11b: Push((int) 45203)
0x11c: Push((int) 45210)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 45195)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0x8e

0x126: Pop(1)
0x127: Push((int) 542774)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 542779)
0x12d: Push((int) 45201)
0x12e: Push((int) 45200)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 542785)
0x132: Push((int) 45284)
0x133: Push((int) 45206)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 542862)
0x137: Push((int) -1)
0x138: Push((int) 45288)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 45284)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x8e

0x142: Pop(1)
0x143: Push((int) 542858)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 542859)
0x149: Push((int) -1)
0x14a: Push((int) 45285)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 542860)
0x14e: Push((int) -1)
0x14f: Push((int) 45286)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 542861)
0x153: Push((int) -1)
0x154: Push((int) 45287)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 45201)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral"
0x15d: Call2 0x8e

0x15e: Pop(1)
0x15f: Push((int) 542780)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 542781)
0x165: Push((int) 45203)
0x166: Push((int) 45202)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 542786)
0x16a: Push((int) -1)
0x16b: Push((int) 45207)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 45203)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0x8e

0x175: Pop(1)
0x176: Push((int) 542782)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 542783)
0x17c: Push((int) -1)
0x17d: Push((int) 45204)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 542784)
0x181: Push((int) -1)
0x182: Push((int) 45205)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x187: PushEmpty(bool)
0x188: Call2 0x361

0x189: Pop(0)
0x18a: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18b: @ lshStopAnimation()
0x18c: Pop(0)
0x18d: GOTO 0x190

0x18e: @ StopAnimation()
0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: GOTO 0xa5

0x192: Return(); Pop(0)

0x193: PushEmpty(float, float)
0x194: Stack[-2] = (int) 300
0x195: Stack[-1] = (int) 100
0x196: Call2 0x1a4

0x197: Pop(2)
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: PushEmpty()
0x19b: Call2 0x22a

0x19c: Pop(0)
0x19d: PushEmpty(int, object)
0x19e: Stack[-1] = Stack[-3]
0x19f: Push(-2, 1); TaskCall(0)
0x1a0: Call2 0x0

0x1a1: Pop(-2, 1); TaskReturn
0x1a2: Pop(2)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty(float, bool, float, bool)
0x1a5: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a6: Push((int) 3)
0x1a7: @ rand(Stack[-3], Stack[-1])
0x1a8: Pop(1)
0x1a9: Push((int) 3)
0x1aa: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ab: @ Sleep(Stack[-1], Stack[-2])
0x1ac: Pop(1)
0x1ad: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1ae: PushEmpty(float, float)
0x1af: Stack[-2] = Stack[-8]
0x1b0: Stack[-1] = Stack[-7]
0x1b1: Call2 0x1e9

0x1b2: Pop(2)
0x1b3: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1b4: GOTO 0x1a6

0x1b5: Return(); Pop(4)

0x1b6: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 0
0x1b9: PushEmpty(bool)
0x1ba: Call2 0x296

0x1bb: Pop(0)
0x1bc: Pop(1); Push((bool) Stack[-1] == 0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: PushEmpty(bool)
0x1bf: Call2 0x1e7

0x1c0: Pop(0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Stack[-1] = (bool) 1
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c4: PushEmpty(object)
0x1c5: Call2 0x321

0x1c6: Pop(0)
0x1c7: @ RemoveActor(Stack[-1])
0x1c8: Pop(1)
0x1c9: Return(); Pop(0)

0x1ca: PushEmpty()
0x1cb: Push("cleanup")
0x1cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1ce: PushEmpty()
0x1cf: Call2 0x1b6

0x1d0: Pop(0)
0x1d1: Return(); Pop(0)

0x1d2: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call2 0x22a

0x1d6: Pop(0)
0x1d7: PushEmpty(bool)
0x1d8: Stack[-1] = (bool) 0
0x1d9: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: PushEmpty(bool)
0x1dc: Call2 0x1e7

0x1dd: Pop(0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[-1] = (bool) 1
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty(object)
0x1e2: Call2 0x321

0x1e3: Pop(0)
0x1e4: @ RemoveActor(Stack[-1])
0x1e5: Pop(1)
0x1e6: Return(); Pop(0)

0x1e7: Stack[-1] = (bool) 1
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: PushEmpty(bool)
0x1eb: Call2 0x296

0x1ec: Pop(0)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: Return(); Pop(0)

0x1f0: Push("player")
0x1f1: @ FindActor(Stack[-4], Stack[-1])
0x1f2: Pop(1)
0x1f3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f5: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f7: Push((int) 10)
0x1f8: Push((float)1.0)
0x1f9: @ SetTimer(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: PushEmpty()
0x1fc: Call2 0x238

0x1fd: Pop(0)
0x1fe: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x200: Push((int) 10)
0x201: @ KillTimer(Stack[-1])
0x202: Pop(1)
0x203: Return(); Pop(0)

0x204: PushEmpty(float, float)
0x205: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: Stack[-3] = (bool) 0
0x208: Return(); Pop(2)

0x209: PushEmpty(float, object)
0x20a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20b: Call2 0x28e

0x20c: Pop(1)
0x20d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x211: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x212: Return(); Pop(2)

0x213: PushEmpty()
0x214: Push((int) 10)
0x215: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x217: PushEmpty(bool)
0x218: Call2 0x204

0x219: Pop(0)
0x21a: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: PushEmpty(object)
0x21e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21f: Call2 0x30f

0x220: Pop(1)
0x221: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x222: GOTO 0x229

0x223: Push( Stack[2 + Tasks[-1].StackPointer] )
0x224: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x225: Push("head")
0x226: @ UnlookAsync(Stack[-1])
0x227: Pop(1)
0x228: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x229: Return(); Pop(0)

0x22a: PushEmpty()
0x22b: Call2 0x289

0x22c: Pop(0)
0x22d: Push((int) 10)
0x22e: @ KillTimer(Stack[-1])
0x22f: Pop(1)
0x230: Push( Stack[2 + Tasks[-1].StackPointer] )
0x231: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x232: Push("head")
0x233: @ UnlookAsync(Stack[-1])
0x234: Pop(1)
0x235: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x236: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x237: Return(); Pop(0)

0x238: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x239: @ WaitForAnimEnd()
0x23a: Pop(0)
0x23b: PushEmpty(bool)
0x23c: Call2 0x296

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: Return(); Pop(14)

0x241: PushEmpty(int)
0x242: Call2 0x36a

0x243: Stack[-8] = Stack[-1]
0x244: Pop(1)
0x245: Stack[-6] = (int) 0
0x246: PushEmpty(bool)
0x247: Stack[-1] = (bool) 0
0x248: Push((int) 5)
0x249: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(bool)
0x24c: Call2 0x296

0x24d: Pop(0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Stack[-1] = (bool) 1
0x250: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x251: Push((int) 3)
0x252: @ irand(Stack[-6], Stack[-1])
0x253: Pop(1)
0x254: Push((int) 0)
0x255: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x257: Push(Stack[-7])
0x258: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x259: @ irand(Stack[-4], Stack[-7])
0x25a: Pop(0)
0x25b: Push("all")
0x25c: PushEmpty(string, int)
0x25d: Stack[-1] = Stack[-7]
0x25e: Call2 0x363

0x25f: Pop(1)
0x260: @ PlayAnimation(Stack[-2], Stack[-1])
0x261: Pop(2)
0x262: @ WaitForAnimEnd(Stack[-3])
0x263: Pop(0)
0x264: Pop(0); Push((bool) Stack[-3] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x284

0x267: GOTO 0x279

0x268: Push((int) 1)
0x269: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x26b: Push((int) 4)
0x26c: @ rand(Stack[-3], Stack[-1])
0x26d: Pop(1)
0x26e: Push((int) 1)
0x26f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x270: @ Sleep(Stack[-1], Stack[-2])
0x271: Pop(1)
0x272: Pop(0); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x284

0x275: GOTO 0x279

0x276: Push(Stack[-6])
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: GOTO 0x284

0x279: PushEmpty(bool)
0x27a: Call2 0x287

0x27b: Pop(0)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x284

0x27f: @ ResetAAS()
0x280: Pop(0)
0x281: Push((int) 1)
0x282: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x283: GOTO 0x246

0x284: @ ResetAAS()
0x285: Pop(0)
0x286: Return(); Pop(14)

0x287: Stack[-1] = (bool) 1
0x288: Return(); Pop(0)

0x289: @ StopAnimation()
0x28a: Pop(0)
0x28b: @ StopGroup0()
0x28c: Pop(0)
0x28d: Return(); Pop(0)

0x28e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28f: @ GetPosition(Stack[-3])
0x290: Pop(0)
0x291: @@ GetPosition(Stack[-2])
0x292: Pop(0)
0x293: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x294: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x295: Return(); Pop(6)

0x296: PushEmpty(bool, bool)
0x297: @ IsLoaded(Stack[-1])
0x298: Pop(0)
0x299: Stack[-3] = Stack[-1]
0x29a: Return(); Pop(2)

0x29b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x29c: @@ GetPosition(Stack[-8])
0x29d: Pop(0)
0x29e: @@ GetEyesHeight(Stack[-9])
0x29f: Pop(0)
0x2a0: Push(CvectorIndex(Stack[-8], 1))
0x2a1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a2: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a3: @ GetPosition(Stack[-7])
0x2a4: Pop(0)
0x2a5: @ GetEyesHeight(Stack[-9])
0x2a6: Pop(0)
0x2a7: Push(CvectorIndex(Stack[-7], 1))
0x2a8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a9: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2aa: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2ab: Push(CvectorIndex(Stack[-6], 1))
0x2ac: Stack[-1] = (int) 0
0x2ad: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ae: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2af: Pop(1); Push(Sqrt(Stack[-1]))
0x2b0: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2b1: Stack[-5] = -Stack[-6]; Pop(0);
0x2b2: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b3: PushEmpty(cvector, cvector)
0x2b4: Push(CVector(0.0, 1.0, 0.0))
0x2b5: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b6: Call2 0x327

0x2b7: Pop(1)
0x2b8: Push((int) 25)
0x2b9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ba: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bb: Push(CVector(0.0, 10.0, 0.0))
0x2bc: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2bd: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2be: @ IsOverrideActive(Stack[-2])
0x2bf: Pop(0)
0x2c0: Push(Stack[-2])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-21] = (bool) 0
0x2c3: Return(); Pop(18)

0x2c4: @ StopWorld()
0x2c5: Pop(0)
0x2c6: @ CameraTransit(Stack[-3], Stack[-5])
0x2c7: Pop(0)
0x2c8: Push(CvectorIndex(Stack[-4], 0))
0x2c9: Push(CvectorIndex(Stack[-5], 2))
0x2ca: @ Rotate(Stack[-2], Stack[-1])
0x2cb: Pop(2)
0x2cc: PushEmpty(bool)
0x2cd: Call2 0x361

0x2ce: Pop(0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2d9

0x2d1: Push("head")
0x2d2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d3: Pop(1)
0x2d4: Push(Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d6: Push("head")
0x2d7: @ LookAsyncCamera(Stack[-1])
0x2d8: Pop(1)
0x2d9: @ CameraWaitForPlayFinish()
0x2da: Pop(0)
0x2db: @ ResumeWorld()
0x2dc: Pop(0)
0x2dd: Stack[-21] = (bool) 1
0x2de: Return(); Pop(18)

0x2df: PushEmpty(bool, bool)
0x2e0: @ CameraSwitchToNormal()
0x2e1: Pop(0)
0x2e2: PushEmpty(bool)
0x2e3: Call2 0x361

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x2ef

0x2e7: Push("head")
0x2e8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e9: Pop(1)
0x2ea: Push(Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ec: Push("head")
0x2ed: @ UnlookAsync(Stack[-1])
0x2ee: Pop(1)
0x2ef: Return(); Pop(2)

0x2f0: PushEmpty(bool, float, float, bool, float, float)
0x2f1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2f2: Pop(0)
0x2f3: Push(Stack[-3])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2f6: Pop(0)
0x2f7: Push((bool) 0)
0x2f8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(1)
0x2fa: GOTO 0x2ff

0x2fb: Push("Can't find lsh animation : ")
0x2fc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2fd: @ Trace(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(6)

0x300: PushEmpty(bool, float, float, bool, float, float)
0x301: @ lshHasAnimation(Stack[-3], Stack[-8])
0x302: Pop(0)
0x303: Push(Stack[-3])
0x304: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x305: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x306: Pop(0)
0x307: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x308: Pop(0)
0x309: GOTO 0x30e

0x30a: Push("Can't find lsh animation : ")
0x30b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x30c: @ Trace(Stack[-1])
0x30d: Pop(1)
0x30e: Return(); Pop(6)

0x30f: PushEmpty(float, cvector, float, cvector)
0x310: @@ GetEyesHeight(Stack[-2])
0x311: Pop(0)
0x312: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x313: Push(CvectorIndex(Stack[-1], 1))
0x314: Stack[-1] = Stack[-3]
0x315: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x316: Push("head")
0x317: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x318: Pop(1)
0x319: Return(); Pop(4)

0x31a: PushEmpty(bool)
0x31b: Call2 0x361

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31e: @ lshStopSpeech()
0x31f: Pop(0)
0x320: Return(); Pop(0)

0x321: PushEmpty(object, object)
0x322: @ self(Stack[-1])
0x323: Pop(0)
0x324: Stack[-3] = Stack[-1]
0x325: Return(); Pop(2)

0x326: Stack[-1] = 0
0x327: PushEmpty(float, float)
0x328: Pop(0); Push(Stack[-3] | Stack[-3]);
0x329: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x32a: Push((float)0.0)
0x32b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x32e: Return(); Pop(2)

0x32f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x330: Return(); Pop(2)

0x331: PushEmpty(int, int)
0x332: @ GetVariable(Stack[-3], Stack[-1])
0x333: Pop(0)
0x334: Stack[-4] = Stack[-1]
0x335: Return(); Pop(2)

0x336: PushEmpty()
0x337: Push("ook12Littlegirl1")
0x338: Push((int) 1)
0x339: @ SetVariable(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: Return(); Pop(0)

0x33c: PushEmpty()
0x33d: PushEmpty(int, string)
0x33e: Stack[-1] = "ook12Littlegirl1"
0x33f: Call2 0x331

0x340: Pop(1)
0x341: Push((int) 0)
0x342: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-2] = (bool) 1
0x345: Return(); Pop(0)

0x346: Stack[-2] = (bool) 0
0x347: Return(); Pop(0)

0x348: PushEmpty(int, int)
0x349: Push("branch")
0x34a: @ GetVariable(Stack[-1], Stack[-2])
0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34f: Stack[-3] = (int) 1
0x350: Return(); Pop(2)

0x351: GOTO 0x357

0x352: Push((int) 1)
0x353: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-3] = (int) 2
0x356: Return(); Pop(2)

0x357: Stack[-3] = (int) 3
0x358: Return(); Pop(2)

0x359: Stack[-1] = (int) 515561
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = (int) 503346
0x35c: Return(); Pop(0)

0x35d: Stack[-1] = "ui/NPC_Citizen1.png"
0x35e: Return(); Pop(0)

0x35f: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x360: Return(); Pop(0)

0x361: Stack[-1] = (bool) 0
0x362: Return(); Pop(0)

0x363: PushEmpty(string, string)
0x364: Stack[-1] = "idle"
0x365: Push(Stack[-3])
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x368: Stack[-4] = Stack[-1]
0x369: Return(); Pop(2)

0x36a: PushEmpty(int, bool, int, bool)
0x36b: Stack[-2] = (int) 0
0x36c: Push("all")
0x36d: PushEmpty(string, int)
0x36e: Stack[-1] = Stack[-5]
0x36f: Call2 0x363

0x370: Pop(1)
0x371: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: Pop(0); Push((bool) Stack[-1] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: GOTO 0x379

0x376: Push((int) 1)
0x377: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x378: GOTO 0x36c

0x379: Stack[-5] = Stack[-2]
0x37a: Return(); Pop(4)

