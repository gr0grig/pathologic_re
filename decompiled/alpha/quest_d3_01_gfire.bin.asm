GlobalVarCount = 0

Strings:
	put_item
	d3q01_blood
	IsOnGround
	d3q01
	light
	Switch
	fire_loc
	scripted
	bonfire.xml
	cleanup
	restore
	GetLocator
	Locator 
	 doesn't exist
	nouse_container

Import:
	AddItem (3 args)
	IsOverrideActive (1 args)
	Barter (1 args)
	GetItemCountOfType (2 args)
	GetVariable (2 args)
	GetProperty (2 args)
	FindActor (2 args)
	SetVisibility (1 args)
	GetScene (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	self (1 args)
	Trace (1 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_0 Op = 0x16 Vars = (object)
		EVENT_32 Op = 0x5e Vars = ()
		EVENT_6 Op = 0x84 Vars = ()


0x0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1: PushEmpty()
0x2: Call 0x3b

0x3: Pop(0)
0x4: Return(); Pop(0)

0x5: PushEmpty(bool, bool)
0x6: Push("put_item")
0x7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xb: Push("d3q01_blood")
0xc: Push((int) 0)
0xd: @ AddItem(Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x10: GOTO 0x15

0x11: PushEmpty(string)
0x12: Stack[-1] = Stack[-4]
0x13: Call 0x68

0x14: Pop(1)
0x15: Return(); Pop(2)

0x16: PushEmpty(bool, bool, bool, bool)
0x17: PushEmpty(bool)
0x18: Call 0xac

0x19: Pop(0)
0x1a: Pop(1); Push((bool) Stack[-1] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1c: Return(); Pop(4)

0x1d: @@ IsOnGround(Stack[-2])
0x1e: Pop(0)
0x1f: Push(Stack[-2])
0x20: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x21: EventDisable(0)
0x22: @ IsOverrideActive(Stack[-1])
0x23: Pop(0)
0x24: Pop(0); Push((bool) Stack[-1] == 0)
0x25: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x26: @ Barter(Stack[-5])
0x27: Pop(0)
0x28: EventEnable(0)
0x29: Return(); Pop(4)

0x2a: PushEmpty(int, int, int, int)
0x2b: Push("d3q01_blood")
0x2c: @ GetItemCountOfType(Stack[-3], Stack[-1])
0x2d: Pop(1)
0x2e: Pop(0); Push((bool) Stack[-2] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x30: Stack[-5] = (bool) 1
0x31: Return(); Pop(4)

0x32: Push("d3q01")
0x33: @ GetVariable(Stack[-1], Stack[-2])
0x34: Pop(1)
0x35: PushEmpty(bool, int)
0x36: Stack[-1] = Stack[-3]
0x37: Call 0xb2

0x38: Pop(1)
0x39: Stack[-6] = !Stack[-1]; Pop(1);
0x3a: Return(); Pop(4)

0x3b: PushEmpty(string, string)
0x3c: Push("light")
0x3d: @ GetProperty(Stack[-1], Stack[-2])
0x3e: Pop(1)
0x3f: @ FindActor(Stack[-1], Stack[-1])
0x40: Pop(0)
0x41: Push((bool) 1)
0x42: @@ Switch(Stack[-1])
0x43: Pop(1)
0x44: Push((bool) 1)
0x45: @ SetVisibility(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty()
0x48: Call 0x4e

0x49: Pop(0)
0x4a: PushEmpty()
0x4b: Call 0x64

0x4c: Pop(0)
0x4d: Return(); Pop(2)

0x4e: PushEmpty(object, string, object, string)
0x4f: @ GetScene(Stack[-2])
0x50: Pop(0)
0x51: Push("fire_loc")
0x52: @ GetProperty(Stack[-1], Stack[-2])
0x53: Pop(1)
0x54: PushEmpty(object, object, string, string, string)
0x55: Stack[-4] = Stack[-7]
0x56: Stack[-3] = Stack[-6]
0x57: Stack[-2] = "scripted"
0x58: Stack[-1] = "bonfire.xml"
0x59: Call 0x9a

0x5a: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x5b: Pop(5)
0x5c: Return(); Pop(4)

0x5d: Stack[-2] = 0
0x5e: @ RemoveActor(Stack[-2])
0x5f: Pop(0)
0x60: Push((bool) 0)
0x61: @@ Switch(Stack[-1])
0x62: Pop(1)
0x63: Return(); Pop(0)

0x64: @ Hold()
0x65: Pop(0)
0x66: GOTO 0x64

0x67: Return(); Pop(0)

0x68: PushEmpty(bool, bool)
0x69: Push("cleanup")
0x6a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x6c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6d: @ IsLoaded(Stack[-1])
0x6e: Pop(0)
0x6f: PushEmpty(bool)
0x70: Stack[-1] = (bool) 0
0x71: Pop(0); Push((bool) Stack[-2] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x73: PushEmpty(bool)
0x74: Call 0x2a

0x75: Pop(0)
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: Stack[-1] = (bool) 1
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: PushEmpty(object)
0x7a: Call 0x94

0x7b: Pop(0)
0x7c: @ RemoveActor(Stack[-1])
0x7d: Pop(1)
0x7e: GOTO 0x83

0x7f: Push("restore")
0x80: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x83: Return(); Pop(2)

0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 0
0x86: Push( Stack[0 + Tasks[-1].StackPointer] )
0x87: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x88: PushEmpty(bool)
0x89: Call 0x2a

0x8a: Pop(0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = (bool) 1
0x8d: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8e: PushEmpty(object)
0x8f: Call 0x94

0x90: Pop(0)
0x91: @ RemoveActor(Stack[-1])
0x92: Pop(1)
0x93: Return(); Pop(0)

0x94: PushEmpty(object, object)
0x95: @ self(Stack[-1])
0x96: Pop(0)
0x97: Stack[-3] = Stack[-1]
0x98: Return(); Pop(2)

0x99: Stack[-1] = 0
0x9a: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9b: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x9c: Pop(0)
0x9d: Pop(0); Push((bool) Stack[-4] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9f: Push("Locator ")
0xa0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa1: Push(" doesn't exist")
0xa2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa3: @ Trace(Stack[-1])
0xa4: Pop(1)
0xa5: Stack[-1] = 0
0xa6: GOTO 0xa9

0xa7: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa8: Pop(0)
0xa9: Stack[-13] = Stack[-1]
0xaa: Return(); Pop(8)

0xab: Stack[-1] = 0
0xac: PushEmpty(int, int)
0xad: Push("nouse_container")
0xae: @ GetVariable(Stack[-1], Stack[-2])
0xaf: Pop(1)
0xb0: Stack[-3] = !Stack[-1]; Pop(0);
0xb1: Return(); Pop(2)

0xb2: PushEmpty()
0xb3: Stack[-2] = (bool) 0
0xb4: Push((int) 1)
0xb5: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb7: Push((int) 1000)
0xb8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Stack[-2] = (bool) 1
0xbb: Return(); Pop(0)

