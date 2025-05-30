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
		EVENT_6 Op = 0x88 Vars = ()


0x0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1: PushEmpty()
0x2: Call2 0x3b

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
0x13: Call2 0x6c

0x14: Pop(1)
0x15: Return(); Pop(2)

0x16: PushEmpty(bool, bool, bool, bool)
0x17: PushEmpty(bool)
0x18: Call2 0xb0

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
0x37: Call2 0xb6

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
0x48: Call2 0x4e

0x49: Pop(0)
0x4a: PushEmpty()
0x4b: Call2 0x68

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
0x59: Call2 0x9e

0x5a: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x5b: Pop(5)
0x5c: Return(); Pop(4)

0x5d: Stack[-2] = 0
0x5e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: @ RemoveActor(Stack[-2])
0x61: Pop(0)
0x62: Push( Stack[1 + Tasks[-1].StackPointer] )
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: Push((bool) 0)
0x65: @@ Switch(Stack[-1])
0x66: Pop(1)
0x67: Return(); Pop(0)

0x68: @ Hold()
0x69: Pop(0)
0x6a: GOTO 0x68

0x6b: Return(); Pop(0)

0x6c: PushEmpty(bool, bool)
0x6d: Push("cleanup")
0x6e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x70: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x71: @ IsLoaded(Stack[-1])
0x72: Pop(0)
0x73: PushEmpty(bool)
0x74: Stack[-1] = (bool) 0
0x75: Pop(0); Push((bool) Stack[-2] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: PushEmpty(bool)
0x78: Call2 0x2a

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = (bool) 1
0x7c: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7d: PushEmpty(object)
0x7e: Call2 0x98

0x7f: Pop(0)
0x80: @ RemoveActor(Stack[-1])
0x81: Pop(1)
0x82: GOTO 0x87

0x83: Push("restore")
0x84: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x87: Return(); Pop(2)

0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8c: PushEmpty(bool)
0x8d: Call2 0x2a

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 1
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: PushEmpty(object)
0x93: Call2 0x98

0x94: Pop(0)
0x95: @ RemoveActor(Stack[-1])
0x96: Pop(1)
0x97: Return(); Pop(0)

0x98: PushEmpty(object, object)
0x99: @ self(Stack[-1])
0x9a: Pop(0)
0x9b: Stack[-3] = Stack[-1]
0x9c: Return(); Pop(2)

0x9d: Stack[-1] = 0
0x9e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x9f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xa0: Pop(0)
0xa1: Pop(0); Push((bool) Stack[-4] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa3: Push("Locator ")
0xa4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa5: Push(" doesn't exist")
0xa6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa7: @ Trace(Stack[-1])
0xa8: Pop(1)
0xa9: Stack[-1] = 0
0xaa: GOTO 0xad

0xab: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xac: Pop(0)
0xad: Stack[-13] = Stack[-1]
0xae: Return(); Pop(8)

0xaf: Stack[-1] = 0
0xb0: PushEmpty(int, int)
0xb1: Push("nouse_container")
0xb2: @ GetVariable(Stack[-1], Stack[-2])
0xb3: Pop(1)
0xb4: Stack[-3] = !Stack[-1]; Pop(0);
0xb5: Return(); Pop(2)

0xb6: PushEmpty()
0xb7: Stack[-2] = (bool) 0
0xb8: Push((int) 1)
0xb9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: Push((int) 1000)
0xbc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Stack[-2] = (bool) 1
0xbf: Return(); Pop(0)

