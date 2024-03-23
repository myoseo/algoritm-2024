#202311401 박성서
#Chapter 1
#1)
#list = []
#node = int(input("노드의 개수 : "))
#for i in range(0, node) :
    #list.append(int(input(f"노드 {i+1} : ")))

#print(f"리스트의 내용: {list}") 



#2)
class Node:
  def __init__(self, data, link=None):
      self.data = data
      self.link = link

def create_linked_list(num_nodes):
  start = None
  last = None

  for _ in range(num_nodes):
      data = input(f"노드 #{_+1} 데이터 : ")
      new_node = Node(data)

      if start is None:
          start = new_node
          last = new_node
      else:
          last.link = new_node
          last = new_node

  return start

def print_linked_list(head):
  current = head
  while current:
      print(current.data, end=" ")
      current = current.link
  print("None")

if __name__ == "__main__":
  num_nodes = int(input("노드의 개수 : "))
  linked_list_head = create_linked_list(num_nodes)
  print("리스트의 내용 :")
  print_linked_list(linked_list_head)