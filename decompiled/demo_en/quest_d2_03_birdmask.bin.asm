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
	d2q03
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ood2Birdmask1
	d2q03BirdmaskGotoLara
	pt_map_lara
	AddMark
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	GetVariable (2 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x18d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x192 Vars = (object)
		EVENT_26 Op = 0x1a8 Vars = (string)
		EVENT_6 Op = 0x1c4 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1d6

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2fa

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2f8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2fc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2fe

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2e7

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
0x41: Call2 0x21a

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

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x288

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x84

0x58: Pop(1)
0x59: Push((int) 506910)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 506911)
0x5f: Push((int) 7618)
0x60: Push((int) 7617)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x300

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x22b

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
0x86: Call2 0x300

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
0x96: Call2 0x23b

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x24a

0x9f: Pop(0)
0xa0: Push((int) 7988)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x26b

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x271

0xac: Pop(2)
0xad: Push((int) 7990)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x26b

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x271

0xb9: Pop(2)
0xba: Push((int) 7991)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x26b

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x271

0xc6: Pop(2)
0xc7: Push((int) 7992)
0xc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xca: PushEmpty(object, object)
0xcb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Call2 0x26b

0xce: Pop(2)
0xcf: Push((int) 7616)
0xd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x288

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd7: PushEmpty(string)
0xd8: Stack[-1] = "Neutral"
0xd9: Call2 0x84

0xda: Pop(1)
0xdb: Push((int) 506910)
0xdc: @@ SetMessage(Stack[-1])
0xdd: Pop(1)
0xde: @@ ClearReplies()
0xdf: Pop(0)
0xe0: Push((int) 506911)
0xe1: Push((int) 7618)
0xe2: Push((int) 7617)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Return(); Pop(0)

0xe6: Push((int) 7993)
0xe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe9: Push((int) 7995)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call2 0x84

0xef: Pop(1)
0xf0: Push((int) 507255)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 507256)
0xf6: Push((int) 7997)
0xf7: Push((int) 7996)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Push((int) 7997)
0xfc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Neutral"
0x100: Call2 0x84

0x101: Pop(1)
0x102: Push((int) 507257)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 507258)
0x108: Push((int) 7999)
0x109: Push((int) 7998)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 507261)
0x10d: Push((int) 7618)
0x10e: Push((int) 8002)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 7999)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call2 0x84

0x118: Pop(1)
0x119: Push((int) 507259)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 507260)
0x11f: Push((int) 7618)
0x120: Push((int) 8000)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 7618)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x84

0x12a: Pop(1)
0x12b: Push((int) 506912)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 507242)
0x131: Push((int) 7983)
0x132: Push((int) 7982)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0x294

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: Push((int) 507252)
0x13b: Push((int) -1)
0x13c: Push((int) 7992)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: Return(); Pop(0)

0x140: Push((int) 7983)
0x141: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(string)
0x144: Stack[-1] = "Neutral"
0x145: Call2 0x84

0x146: Pop(1)
0x147: Push((int) 507243)
0x148: @@ SetMessage(Stack[-1])
0x149: Pop(1)
0x14a: @@ ClearReplies()
0x14b: Pop(0)
0x14c: Push((int) 507244)
0x14d: Push((int) 7985)
0x14e: Push((int) 7984)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 507251)
0x152: Push((int) -1)
0x153: Push((int) 7991)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 7985)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0x84

0x15d: Pop(1)
0x15e: Push((int) 507245)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 507246)
0x164: Push((int) 7987)
0x165: Push((int) 7986)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 507250)
0x169: Push((int) -1)
0x16a: Push((int) 7990)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 7987)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral"
0x173: Call2 0x84

0x174: Pop(1)
0x175: Push((int) 507247)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 507248)
0x17b: Push((int) -1)
0x17c: Push((int) 7988)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x181: PushEmpty(bool)
0x182: Call2 0x300

0x183: Pop(0)
0x184: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x185: @ lshStopAnimation()
0x186: Pop(0)
0x187: GOTO 0x18a

0x188: @ StopAnimation()
0x189: Pop(0)
0x18a: Return(); Pop(0)

0x18b: GOTO 0x9b

0x18c: Return(); Pop(0)

0x18d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x18e: PushEmpty()
0x18f: Call2 0x1a4

0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: PushEmpty(int, int)
0x193: Push( Stack[1 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x195: Return(); Pop(2)

0x196: Push("d2q03")
0x197: @ GetVariable(Stack[-1], Stack[-2])
0x198: Pop(1)
0x199: Push((int) -1)
0x19a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19c: PushEmpty(int, object)
0x19d: Stack[-1] = Stack[-5]
0x19e: Push(-2, 1); TaskCall(0)
0x19f: Call2 0x0

0x1a0: Pop(-2, 1); TaskReturn
0x1a1: Pop(2)
0x1a2: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1a3: Return(); Pop(2)

0x1a4: @ Hold()
0x1a5: Pop(0)
0x1a6: GOTO 0x1a4

0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(bool, bool)
0x1a9: Push("cleanup")
0x1aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ac: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ad: @ IsLoaded(Stack[-1])
0x1ae: Pop(0)
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: Pop(0); Push((bool) Stack[-2] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(bool)
0x1b4: Call2 0x1d4

0x1b5: Pop(0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b7: Stack[-1] = (bool) 1
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object)
0x1ba: Call2 0x251

0x1bb: Pop(0)
0x1bc: @ RemoveActor(Stack[-1])
0x1bd: Pop(1)
0x1be: GOTO 0x1c3

0x1bf: Push("restore")
0x1c0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1c3: Return(); Pop(2)

0x1c4: PushEmpty(bool)
0x1c5: Stack[-1] = (bool) 0
0x1c6: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x1d4

0x1ca: Pop(0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[-1] = (bool) 1
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: PushEmpty(object)
0x1cf: Call2 0x251

0x1d0: Pop(0)
0x1d1: @ RemoveActor(Stack[-1])
0x1d2: Pop(1)
0x1d3: Return(); Pop(0)

0x1d4: Stack[-1] = (bool) 1
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1d7: @@ GetPosition(Stack[-8])
0x1d8: Pop(0)
0x1d9: @@ GetEyesHeight(Stack[-9])
0x1da: Pop(0)
0x1db: Push(CvectorIndex(Stack[-8], 1))
0x1dc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1dd: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1de: @ GetPosition(Stack[-7])
0x1df: Pop(0)
0x1e0: @ GetEyesHeight(Stack[-9])
0x1e1: Pop(0)
0x1e2: Push(CvectorIndex(Stack[-7], 1))
0x1e3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e4: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1e5: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1e6: Push(CvectorIndex(Stack[-6], 1))
0x1e7: Stack[-1] = (int) 0
0x1e8: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1e9: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1ea: Pop(1); Push(Sqrt(Stack[-1]))
0x1eb: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1ec: Stack[-5] = -Stack[-6]; Pop(0);
0x1ed: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1ee: PushEmpty(cvector, cvector)
0x1ef: Push(CVector(0.0, 1.0, 0.0))
0x1f0: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1f1: Call2 0x257

0x1f2: Pop(1)
0x1f3: Push((int) 25)
0x1f4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f6: Push(CVector(0.0, 10.0, 0.0))
0x1f7: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1f8: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1f9: @ IsOverrideActive(Stack[-2])
0x1fa: Pop(0)
0x1fb: Push(Stack[-2])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fd: Stack[-21] = (bool) 0
0x1fe: Return(); Pop(18)

0x1ff: @ StopWorld()
0x200: Pop(0)
0x201: @ CameraTransit(Stack[-3], Stack[-5])
0x202: Pop(0)
0x203: Push(CvectorIndex(Stack[-4], 0))
0x204: Push(CvectorIndex(Stack[-5], 2))
0x205: @ Rotate(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: PushEmpty(bool)
0x208: Call2 0x300

0x209: Pop(0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x214

0x20c: Push("head")
0x20d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x20e: Pop(1)
0x20f: Push(Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: Push("head")
0x212: @ LookAsyncCamera(Stack[-1])
0x213: Pop(1)
0x214: @ CameraWaitForPlayFinish()
0x215: Pop(0)
0x216: @ ResumeWorld()
0x217: Pop(0)
0x218: Stack[-21] = (bool) 1
0x219: Return(); Pop(18)

0x21a: PushEmpty(bool, bool)
0x21b: @ CameraSwitchToNormal()
0x21c: Pop(0)
0x21d: PushEmpty(bool)
0x21e: Call2 0x300

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: GOTO 0x22a

0x222: Push("head")
0x223: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x224: Pop(1)
0x225: Push(Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x227: Push("head")
0x228: @ UnlookAsync(Stack[-1])
0x229: Pop(1)
0x22a: Return(); Pop(2)

0x22b: PushEmpty(bool, float, float, bool, float, float)
0x22c: @ lshHasAnimation(Stack[-3], Stack[-7])
0x22d: Pop(0)
0x22e: Push(Stack[-3])
0x22f: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x230: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x231: Pop(0)
0x232: Push((bool) 0)
0x233: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(1)
0x235: GOTO 0x23a

0x236: Push("Can't find lsh animation : ")
0x237: Pop(1); Push(Stack[-1] + Stack[-8]);
0x238: @ Trace(Stack[-1])
0x239: Pop(1)
0x23a: Return(); Pop(6)

0x23b: PushEmpty(bool, float, float, bool, float, float)
0x23c: @ lshHasAnimation(Stack[-3], Stack[-8])
0x23d: Pop(0)
0x23e: Push(Stack[-3])
0x23f: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x240: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x241: Pop(0)
0x242: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x243: Pop(0)
0x244: GOTO 0x249

0x245: Push("Can't find lsh animation : ")
0x246: Pop(1); Push(Stack[-1] + Stack[-9]);
0x247: @ Trace(Stack[-1])
0x248: Pop(1)
0x249: Return(); Pop(6)

0x24a: PushEmpty(bool)
0x24b: Call2 0x300

0x24c: Pop(0)
0x24d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24e: @ lshStopSpeech()
0x24f: Pop(0)
0x250: Return(); Pop(0)

0x251: PushEmpty(object, object)
0x252: @ self(Stack[-1])
0x253: Pop(0)
0x254: Stack[-3] = Stack[-1]
0x255: Return(); Pop(2)

0x256: Stack[-1] = 0
0x257: PushEmpty(float, float)
0x258: Pop(0); Push(Stack[-3] | Stack[-3]);
0x259: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x25a: Push((float)0.0)
0x25b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x25e: Return(); Pop(2)

0x25f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x260: Return(); Pop(2)

0x261: PushEmpty(int, int)
0x262: @ GetVariable(Stack[-3], Stack[-1])
0x263: Pop(0)
0x264: Stack[-4] = Stack[-1]
0x265: Return(); Pop(2)

0x266: PushEmpty(float, float)
0x267: @ GetGameTime(Stack[-1])
0x268: Pop(0)
0x269: Stack[-3] = Stack[-1]
0x26a: Return(); Pop(2)

0x26b: PushEmpty()
0x26c: Push("ood2Birdmask1")
0x26d: Push((int) 1)
0x26e: @ SetVariable(Stack[-2], Stack[-1])
0x26f: Pop(2)
0x270: Return(); Pop(0)

0x271: PushEmpty(object, object)
0x272: Push("d2q03")
0x273: Push((int) 3)
0x274: @ SetVariable(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: PushEmpty(object)
0x277: Call2 0x2d6

0x278: Stack[-2] = Stack[-1]
0x279: Pop(1)
0x27a: Push("d2q03BirdmaskGotoLara")
0x27b: Push("pt_map_lara")
0x27c: Push((int) 0)
0x27d: Push((int) 515293)
0x27e: PushEmpty(float)
0x27f: Call2 0x266

0x280: Pop(0)
0x281: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(5)
0x283: PushEmpty()
0x284: Call2 0x2a0

0x285: Pop(0)
0x286: Return(); Pop(2)

0x287: Stack[-1] = 0
0x288: PushEmpty()
0x289: PushEmpty(int, string)
0x28a: Stack[-1] = "ood2Birdmask1"
0x28b: Call2 0x261

0x28c: Pop(1)
0x28d: Push((int) 0)
0x28e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: Stack[-2] = (bool) 1
0x291: Return(); Pop(0)

0x292: Stack[-2] = (bool) 0
0x293: Return(); Pop(0)

0x294: PushEmpty()
0x295: PushEmpty(int, string)
0x296: Stack[-1] = "d2q03"
0x297: Call2 0x261

0x298: Pop(1)
0x299: Push((int) 3)
0x29a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29c: Stack[-2] = (bool) 1
0x29d: Return(); Pop(0)

0x29e: Stack[-2] = (bool) 0
0x29f: Return(); Pop(0)

0x2a0: PushEmpty(object, object)
0x2a1: Push((int) 133)
0x2a2: Push((int) 2)
0x2a3: Push((int) 515270)
0x2a4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: PushEmpty(bool, object, int)
0x2a7: Stack[-2] = Stack[-4]
0x2a8: Stack[-1] = (int) 12
0x2a9: Call2 0x2ba

0x2aa: Pop(3)
0x2ab: Return(); Pop(2)

0x2ac: Stack[-1] = 0
0x2ad: PushEmpty(object, object)
0x2ae: @ GetDiaryRoot(Stack[-1])
0x2af: Pop(0)
0x2b0: Pop(0); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b2: Push("Can't retrieve diary root")
0x2b3: @ Trace(Stack[-1])
0x2b4: Pop(1)
0x2b5: Stack[-3] = (bool) 0
0x2b6: Return(); Pop(2)

0x2b7: Stack[-3] = Stack[-1]
0x2b8: Return(); Pop(2)

0x2b9: Stack[-1] = 0
0x2ba: PushEmpty(object, object, int, object, object, int)
0x2bb: PushEmpty(object)
0x2bc: Call2 0x2ad

0x2bd: Stack[-4] = Stack[-1]
0x2be: Pop(1)
0x2bf: @@ Find(Stack[-7], Stack[-2])
0x2c0: Pop(0)
0x2c1: Pop(0); Push((bool) Stack[-2] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: Push("Can't find diary parent with id: ")
0x2c4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2c5: @ Trace(Stack[-1])
0x2c6: Pop(1)
0x2c7: Stack[-9] = (bool) 0
0x2c8: Return(); Pop(6)

0x2c9: @@ AddChild(Stack[-8])
0x2ca: Pop(0)
0x2cb: Push((int) 7)
0x2cc: @ SendWorldWndMessage(Stack[-1])
0x2cd: Pop(1)
0x2ce: @@ GetCategory(Stack[-1])
0x2cf: Pop(0)
0x2d0: @ SetDiarySection(Stack[-1])
0x2d1: Pop(0)
0x2d2: Stack[-9] = (bool) 0
0x2d3: Return(); Pop(6)

0x2d4: Stack[-2] = 0
0x2d5: Stack[-3] = 0
0x2d6: PushEmpty(object, object, object, object)
0x2d7: @ GetMainOutdoorScene(Stack[-2])
0x2d8: Pop(0)
0x2d9: Pop(0); Push((bool) Stack[-2] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2db: Push("Can't find main outdoor scene")
0x2dc: @ Trace(Stack[-1])
0x2dd: Pop(1)
0x2de: Stack[-1] = 0
0x2df: Stack[-5] = Stack[-1]
0x2e0: Return(); Pop(4)

0x2e1: @@ GetMap(Stack[-1])
0x2e2: Pop(0)
0x2e3: Stack[-5] = Stack[-1]
0x2e4: Return(); Pop(4)

0x2e5: Stack[-1] = 0
0x2e6: Stack[-2] = 0
0x2e7: PushEmpty(int, int)
0x2e8: Push("branch")
0x2e9: @ GetVariable(Stack[-1], Stack[-2])
0x2ea: Pop(1)
0x2eb: Push((int) 0)
0x2ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ee: Stack[-3] = (int) 1
0x2ef: Return(); Pop(2)

0x2f0: GOTO 0x2f6

0x2f1: Push((int) 1)
0x2f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f4: Stack[-3] = (int) 2
0x2f5: Return(); Pop(2)

0x2f6: Stack[-3] = (int) 3
0x2f7: Return(); Pop(2)

0x2f8: Stack[-1] = (int) 515571
0x2f9: Return(); Pop(0)

0x2fa: Stack[-1] = (int) 504029
0x2fb: Return(); Pop(0)

0x2fc: Stack[-1] = "ui/NPC_bmask.png"
0x2fd: Return(); Pop(0)

0x2fe: Stack[-1] = "ui/NPC_bmask_b.png"
0x2ff: Return(); Pop(0)

0x300: Stack[-1] = (bool) 0
0x301: Return(); Pop(0)

