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
	Door 
	 not found
	locked
	SetProperty
	itheater@door1
	ook12TWhitemask1
	branch
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png

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
	GetVariable (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x1b7
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x1bd Vars = (object)
		EVENT_26 Op = 0x1ee Vars = (string)
		EVENT_6 Op = 0x1f6 Vars = ()
		EVENT_7 Op = 0x237 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2bf

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3b1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3af

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3b3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3b5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x39e

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
0x41: Call2 0x304

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

0x50: PushEmpty(object, object)
0x51: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53: Call2 0x385

0x54: Pop(2)
0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x8e

0x58: Pop(1)
0x59: Push((int) 540992)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x392

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x63: Push((int) 540993)
0x64: Push((int) 43484)
0x65: Push((int) 43083)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 541006)
0x69: Push((int) -1)
0x6a: Push((int) 43099)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x3b7

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x316

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
0x90: Call2 0x3b7

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
0xa0: Call2 0x326

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x340

0xa9: Pop(0)
0xaa: Push((int) 43083)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x38c

0xb1: Pop(2)
0xb2: Push((int) 43082)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x385

0xb9: Pop(2)
0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0x8e

0xbd: Pop(1)
0xbe: Push((int) 540992)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Call2 0x392

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 540993)
0xc9: Push((int) 43484)
0xca: Push((int) 43083)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 541006)
0xce: Push((int) -1)
0xcf: Push((int) 43099)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 43484)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 541338)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 541378)
0xe0: Push((int) 43529)
0xe1: Push((int) 43528)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 541339)
0xe5: Push((int) 43486)
0xe6: Push((int) 43485)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 43529)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 541379)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 541381)
0xf7: Push((int) 43532)
0xf8: Push((int) 43531)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 541380)
0xfc: Push((int) 43535)
0xfd: Push((int) 43530)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 43532)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x8e

0x107: Pop(1)
0x108: Push((int) 541382)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 541383)
0x10e: Push((int) 43537)
0x10f: Push((int) 43533)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 541384)
0x113: Push((int) 43535)
0x114: Push((int) 43534)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 43535)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x8e

0x11e: Pop(1)
0x11f: Push((int) 541385)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 541386)
0x125: Push((int) 43539)
0x126: Push((int) 43536)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Return(); Pop(0)

0x12a: Push((int) 43537)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x12d: PushEmpty(string)
0x12e: Stack[-1] = "Neutral"
0x12f: Call2 0x8e

0x130: Pop(1)
0x131: Push((int) 541387)
0x132: @@ SetMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ ClearReplies()
0x135: Pop(0)
0x136: Push((int) 541388)
0x137: Push((int) 43539)
0x138: Push((int) 43538)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Push((int) 542763)
0x13c: Push((int) 45184)
0x13d: Push((int) 45183)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 45184)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0x8e

0x147: Pop(1)
0x148: Push((int) 542764)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 542765)
0x14e: Push((int) 45186)
0x14f: Push((int) 45185)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 45186)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x8e

0x159: Pop(1)
0x15a: Push((int) 542766)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 542767)
0x160: Push((int) 43486)
0x161: Push((int) 45187)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 43539)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0x8e

0x16b: Pop(1)
0x16c: Push((int) 541389)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 541390)
0x172: Push((int) 43486)
0x173: Push((int) 43541)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 541392)
0x177: Push((int) 43486)
0x178: Push((int) 43545)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 43486)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Neutral"
0x181: Call2 0x8e

0x182: Pop(1)
0x183: Push((int) 541340)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 541341)
0x189: Push((int) 43488)
0x18a: Push((int) 43487)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Push((int) 541393)
0x18e: Push((int) -1)
0x18f: Push((int) 43547)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 43488)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral"
0x198: Call2 0x8e

0x199: Pop(1)
0x19a: Push((int) 541342)
0x19b: @@ SetMessage(Stack[-1])
0x19c: Pop(1)
0x19d: @@ ClearReplies()
0x19e: Pop(0)
0x19f: Push((int) 541343)
0x1a0: Push((int) -1)
0x1a1: Push((int) 43489)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Push((int) 541391)
0x1a5: Push((int) -1)
0x1a6: Push((int) 43543)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ab: PushEmpty(bool)
0x1ac: Call2 0x3b7

0x1ad: Pop(0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1af: @ lshStopAnimation()
0x1b0: Pop(0)
0x1b1: GOTO 0x1b4

0x1b2: @ StopAnimation()
0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: GOTO 0xa5

0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(float, float)
0x1b8: Stack[-2] = (int) 300
0x1b9: Stack[-1] = (int) 100
0x1ba: Call2 0x1c8

0x1bb: Pop(2)
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty()
0x1be: PushEmpty()
0x1bf: Call2 0x24e

0x1c0: Pop(0)
0x1c1: PushEmpty(int, object)
0x1c2: Stack[-1] = Stack[-3]
0x1c3: Push(-2, 1); TaskCall(0)
0x1c4: Call2 0x0

0x1c5: Pop(-2, 1); TaskReturn
0x1c6: Pop(2)
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty(float, bool, float, bool)
0x1c9: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1ca: Push((int) 3)
0x1cb: @ rand(Stack[-3], Stack[-1])
0x1cc: Pop(1)
0x1cd: Push((int) 3)
0x1ce: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cf: @ Sleep(Stack[-1], Stack[-2])
0x1d0: Pop(1)
0x1d1: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1d2: PushEmpty(float, float)
0x1d3: Stack[-2] = Stack[-8]
0x1d4: Stack[-1] = Stack[-7]
0x1d5: Call2 0x20d

0x1d6: Pop(2)
0x1d7: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1d8: GOTO 0x1ca

0x1d9: Return(); Pop(4)

0x1da: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1db: PushEmpty(bool)
0x1dc: Stack[-1] = (bool) 0
0x1dd: PushEmpty(bool)
0x1de: Call2 0x2ba

0x1df: Pop(0)
0x1e0: Pop(1); Push((bool) Stack[-1] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(bool)
0x1e3: Call2 0x20b

0x1e4: Pop(0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e8: PushEmpty(object)
0x1e9: Call2 0x347

0x1ea: Pop(0)
0x1eb: @ RemoveActor(Stack[-1])
0x1ec: Pop(1)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: Push("cleanup")
0x1f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: PushEmpty()
0x1f3: Call2 0x1da

0x1f4: Pop(0)
0x1f5: Return(); Pop(0)

0x1f6: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f8: PushEmpty()
0x1f9: Call2 0x24e

0x1fa: Pop(0)
0x1fb: PushEmpty(bool)
0x1fc: Stack[-1] = (bool) 0
0x1fd: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: PushEmpty(bool)
0x200: Call2 0x20b

0x201: Pop(0)
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Stack[-1] = (bool) 1
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(object)
0x206: Call2 0x347

0x207: Pop(0)
0x208: @ RemoveActor(Stack[-1])
0x209: Pop(1)
0x20a: Return(); Pop(0)

0x20b: Stack[-1] = (bool) 1
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: PushEmpty(bool)
0x20f: Call2 0x2ba

0x210: Pop(0)
0x211: Pop(1); Push((bool) Stack[-1] == 0)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Return(); Pop(0)

0x214: Push("player")
0x215: @ FindActor(Stack[-4], Stack[-1])
0x216: Pop(1)
0x217: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x218: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x219: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x21a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x21b: Push((int) 10)
0x21c: Push((float)1.0)
0x21d: @ SetTimer(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: PushEmpty()
0x220: Call2 0x25c

0x221: Pop(0)
0x222: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x224: Push((int) 10)
0x225: @ KillTimer(Stack[-1])
0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty(float, float)
0x229: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: Stack[-3] = (bool) 0
0x22c: Return(); Pop(2)

0x22d: PushEmpty(float, object)
0x22e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22f: Call2 0x2b2

0x230: Pop(1)
0x231: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x232: Push( Stack[2 + Tasks[-1].StackPointer] )
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x235: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x236: Return(); Pop(2)

0x237: PushEmpty()
0x238: Push((int) 10)
0x239: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23b: PushEmpty(bool)
0x23c: Call2 0x228

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x23f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: PushEmpty(object)
0x242: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x243: Call2 0x335

0x244: Pop(1)
0x245: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x246: GOTO 0x24d

0x247: Push( Stack[2 + Tasks[-1].StackPointer] )
0x248: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x249: Push("head")
0x24a: @ UnlookAsync(Stack[-1])
0x24b: Pop(1)
0x24c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24d: Return(); Pop(0)

0x24e: PushEmpty()
0x24f: Call2 0x2ad

0x250: Pop(0)
0x251: Push((int) 10)
0x252: @ KillTimer(Stack[-1])
0x253: Pop(1)
0x254: Push( Stack[2 + Tasks[-1].StackPointer] )
0x255: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x256: Push("head")
0x257: @ UnlookAsync(Stack[-1])
0x258: Pop(1)
0x259: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x25a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25b: Return(); Pop(0)

0x25c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x25d: @ WaitForAnimEnd()
0x25e: Pop(0)
0x25f: PushEmpty(bool)
0x260: Call2 0x2ba

0x261: Pop(0)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: Return(); Pop(14)

0x265: PushEmpty(int)
0x266: Call2 0x374

0x267: Stack[-8] = Stack[-1]
0x268: Pop(1)
0x269: Stack[-6] = (int) 0
0x26a: PushEmpty(bool)
0x26b: Stack[-1] = (bool) 0
0x26c: Push((int) 5)
0x26d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26f: PushEmpty(bool)
0x270: Call2 0x2ba

0x271: Pop(0)
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: Stack[-1] = (bool) 1
0x274: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x275: Push((int) 3)
0x276: @ irand(Stack[-6], Stack[-1])
0x277: Pop(1)
0x278: Push((int) 0)
0x279: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x27b: Push(Stack[-7])
0x27c: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27d: @ irand(Stack[-4], Stack[-7])
0x27e: Pop(0)
0x27f: Push("all")
0x280: PushEmpty(string, int)
0x281: Stack[-1] = Stack[-7]
0x282: Call2 0x36d

0x283: Pop(1)
0x284: @ PlayAnimation(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: @ WaitForAnimEnd(Stack[-3])
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-3] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x2a8

0x28b: GOTO 0x29d

0x28c: Push((int) 1)
0x28d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x28f: Push((int) 4)
0x290: @ rand(Stack[-3], Stack[-1])
0x291: Pop(1)
0x292: Push((int) 1)
0x293: Pop(1); Push(Stack[-3] + Stack[-1]);
0x294: @ Sleep(Stack[-1], Stack[-2])
0x295: Pop(1)
0x296: Pop(0); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: GOTO 0x2a8

0x299: GOTO 0x29d

0x29a: Push(Stack[-6])
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a8

0x29d: PushEmpty(bool)
0x29e: Call2 0x2ab

0x29f: Pop(0)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2a8

0x2a3: @ ResetAAS()
0x2a4: Pop(0)
0x2a5: Push((int) 1)
0x2a6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2a7: GOTO 0x26a

0x2a8: @ ResetAAS()
0x2a9: Pop(0)
0x2aa: Return(); Pop(14)

0x2ab: Stack[-1] = (bool) 1
0x2ac: Return(); Pop(0)

0x2ad: @ StopAnimation()
0x2ae: Pop(0)
0x2af: @ StopGroup0()
0x2b0: Pop(0)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b3: @ GetPosition(Stack[-3])
0x2b4: Pop(0)
0x2b5: @@ GetPosition(Stack[-2])
0x2b6: Pop(0)
0x2b7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b9: Return(); Pop(6)

0x2ba: PushEmpty(bool, bool)
0x2bb: @ IsLoaded(Stack[-1])
0x2bc: Pop(0)
0x2bd: Stack[-3] = Stack[-1]
0x2be: Return(); Pop(2)

0x2bf: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2c0: @@ GetPosition(Stack[-8])
0x2c1: Pop(0)
0x2c2: @@ GetEyesHeight(Stack[-9])
0x2c3: Pop(0)
0x2c4: Push(CvectorIndex(Stack[-8], 1))
0x2c5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c7: @ GetPosition(Stack[-7])
0x2c8: Pop(0)
0x2c9: @ GetEyesHeight(Stack[-9])
0x2ca: Pop(0)
0x2cb: Push(CvectorIndex(Stack[-7], 1))
0x2cc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2cd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ce: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2cf: Push(CvectorIndex(Stack[-6], 1))
0x2d0: Stack[-1] = (int) 0
0x2d1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2d2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d3: Pop(1); Push(Sqrt(Stack[-1]))
0x2d4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d5: Stack[-5] = -Stack[-6]; Pop(0);
0x2d6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d7: PushEmpty(cvector, cvector)
0x2d8: Push(CVector(0.0, 1.0, 0.0))
0x2d9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2da: Call2 0x34d

0x2db: Pop(1)
0x2dc: Push((int) 25)
0x2dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2df: Push(CVector(0.0, 10.0, 0.0))
0x2e0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2e1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2e2: @ IsOverrideActive(Stack[-2])
0x2e3: Pop(0)
0x2e4: Push(Stack[-2])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-21] = (bool) 0
0x2e7: Return(); Pop(18)

0x2e8: @ StopWorld()
0x2e9: Pop(0)
0x2ea: Push((bool) 1)
0x2eb: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2ec: Pop(1)
0x2ed: Push(CvectorIndex(Stack[-4], 0))
0x2ee: Push(CvectorIndex(Stack[-5], 2))
0x2ef: @ Rotate(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: PushEmpty(bool)
0x2f2: Call2 0x3b7

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: GOTO 0x2fe

0x2f6: Push("head")
0x2f7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f8: Pop(1)
0x2f9: Push(Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fb: Push("head")
0x2fc: @ LookAsyncCamera(Stack[-1])
0x2fd: Pop(1)
0x2fe: @ CameraWaitForPlayFinish()
0x2ff: Pop(0)
0x300: @ ResumeWorld()
0x301: Pop(0)
0x302: Stack[-21] = (bool) 1
0x303: Return(); Pop(18)

0x304: PushEmpty(bool, bool)
0x305: Push((bool) 1)
0x306: @ CameraSwitchToNormal(Stack[-1])
0x307: Pop(1)
0x308: PushEmpty(bool)
0x309: Call2 0x3b7

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30c: GOTO 0x315

0x30d: Push("head")
0x30e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30f: Pop(1)
0x310: Push(Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x312: Push("head")
0x313: @ UnlookAsync(Stack[-1])
0x314: Pop(1)
0x315: Return(); Pop(2)

0x316: PushEmpty(bool, float, float, bool, float, float)
0x317: @ lshHasAnimation(Stack[-3], Stack[-7])
0x318: Pop(0)
0x319: Push(Stack[-3])
0x31a: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x31c: Pop(0)
0x31d: Push((bool) 0)
0x31e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(1)
0x320: GOTO 0x325

0x321: Push("Can't find lsh animation : ")
0x322: Pop(1); Push(Stack[-1] + Stack[-8]);
0x323: @ Trace(Stack[-1])
0x324: Pop(1)
0x325: Return(); Pop(6)

0x326: PushEmpty(bool, float, float, bool, float, float)
0x327: @ lshHasAnimation(Stack[-3], Stack[-8])
0x328: Pop(0)
0x329: Push(Stack[-3])
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x32c: Pop(0)
0x32d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x32e: Pop(0)
0x32f: GOTO 0x334

0x330: Push("Can't find lsh animation : ")
0x331: Pop(1); Push(Stack[-1] + Stack[-9]);
0x332: @ Trace(Stack[-1])
0x333: Pop(1)
0x334: Return(); Pop(6)

0x335: PushEmpty(float, cvector, float, cvector)
0x336: @@ GetEyesHeight(Stack[-2])
0x337: Pop(0)
0x338: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x339: Push(CvectorIndex(Stack[-1], 1))
0x33a: Stack[-1] = Stack[-3]
0x33b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x33c: Push("head")
0x33d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x33e: Pop(1)
0x33f: Return(); Pop(4)

0x340: PushEmpty(bool)
0x341: Call2 0x3b7

0x342: Pop(0)
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: @ lshStopSpeech()
0x345: Pop(0)
0x346: Return(); Pop(0)

0x347: PushEmpty(object, object)
0x348: @ self(Stack[-1])
0x349: Pop(0)
0x34a: Stack[-3] = Stack[-1]
0x34b: Return(); Pop(2)

0x34c: Stack[-1] = 0
0x34d: PushEmpty(float, float)
0x34e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x350: Push((float)0.0)
0x351: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x354: Return(); Pop(2)

0x355: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x356: Return(); Pop(2)

0x357: PushEmpty(int, int)
0x358: @ GetVariable(Stack[-3], Stack[-1])
0x359: Pop(0)
0x35a: Stack[-4] = Stack[-1]
0x35b: Return(); Pop(2)

0x35c: PushEmpty(object, object)
0x35d: @ FindActor(Stack[-1], Stack[-4])
0x35e: Pop(0)
0x35f: Pop(0); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x361: Push("Door ")
0x362: Pop(1); Push(Stack[-1] + Stack[-5]);
0x363: Push(" not found")
0x364: Pop(2); Push(Stack[-2] + Stack[-1]);
0x365: @ Trace(Stack[-1])
0x366: Pop(1)
0x367: GOTO 0x36b

0x368: Push("locked")
0x369: @@ SetProperty(Stack[-1], Stack[-4])
0x36a: Pop(1)
0x36b: Return(); Pop(2)

0x36c: Stack[-1] = 0
0x36d: PushEmpty(string, string)
0x36e: Stack[-1] = "idle"
0x36f: Push(Stack[-3])
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x372: Stack[-4] = Stack[-1]
0x373: Return(); Pop(2)

0x374: PushEmpty(int, bool, int, bool)
0x375: Stack[-2] = (int) 0
0x376: Push("all")
0x377: PushEmpty(string, int)
0x378: Stack[-1] = Stack[-5]
0x379: Call2 0x36d

0x37a: Pop(1)
0x37b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x37c: Pop(2)
0x37d: Pop(0); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37f: GOTO 0x383

0x380: Push((int) 1)
0x381: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x382: GOTO 0x376

0x383: Stack[-5] = Stack[-2]
0x384: Return(); Pop(4)

0x385: PushEmpty()
0x386: PushEmpty(string, bool)
0x387: Stack[-2] = "itheater@door1"
0x388: Stack[-1] = (bool) 0
0x389: Call2 0x35c

0x38a: Pop(2)
0x38b: Return(); Pop(0)

0x38c: PushEmpty()
0x38d: Push("ook12TWhitemask1")
0x38e: Push((int) 1)
0x38f: @ SetVariable(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: Return(); Pop(0)

0x392: PushEmpty()
0x393: PushEmpty(int, string)
0x394: Stack[-1] = "ook12TWhitemask1"
0x395: Call2 0x357

0x396: Pop(1)
0x397: Push((int) 0)
0x398: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-2] = (bool) 1
0x39b: Return(); Pop(0)

0x39c: Stack[-2] = (bool) 0
0x39d: Return(); Pop(0)

0x39e: PushEmpty(int, int)
0x39f: Push("branch")
0x3a0: @ GetVariable(Stack[-1], Stack[-2])
0x3a1: Pop(1)
0x3a2: Push((int) 0)
0x3a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a5: Stack[-3] = (int) 1
0x3a6: Return(); Pop(2)

0x3a7: GOTO 0x3ad

0x3a8: Push((int) 1)
0x3a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[-3] = (int) 2
0x3ac: Return(); Pop(2)

0x3ad: Stack[-3] = (int) 3
0x3ae: Return(); Pop(2)

0x3af: Stack[-1] = (int) 515569
0x3b0: Return(); Pop(0)

0x3b1: Stack[-1] = (int) 503354
0x3b2: Return(); Pop(0)

0x3b3: Stack[-1] = "ui/NPC_wmask.png"
0x3b4: Return(); Pop(0)

0x3b5: Stack[-1] = "ui/NPC_wmask_b.png"
0x3b6: Return(); Pop(0)

0x3b7: Stack[-1] = (bool) 0
0x3b8: Return(); Pop(0)

