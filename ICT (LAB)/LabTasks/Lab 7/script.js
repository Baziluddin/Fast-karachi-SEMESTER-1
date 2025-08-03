var shoppingList = [ ];
function addItem(item)
{
    shoppingList.push(item);
    console.log("task added :" + item);
}
// addItem("Apples");
// addItem("Bread");

//addItem("Milk");
function removeItem(index){
    if (index >= 0 && index < shoppingList.length)
    {
        var removeditem  = shoppingList.splice(index,1);
        console.log("task removed :",  removeditem);
    }
    else
    {
        console.log("errror : invaid problem  in index");
    }
}
//removeItem(1); // Remove Bread

function  displayItems(){
    console.log("to : dolist");
    for(var i = 0;i<shoppingList.length; i++)
    {
        console.log((i+1)  + ":" + shoppingList[i]);
    }
}
//displayItems();
function  clearList(){
    shoppingList = [];
    console.log("all items in array cleared");

}
//clearList();
addItem("Orange ");
addItem("mango ");
addItem("grapes ");

displayItems();
removeItem(1);
displayItems();
clearList();


