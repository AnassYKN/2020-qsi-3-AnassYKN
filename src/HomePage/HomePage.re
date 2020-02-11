[@react.component]
let make = _ => {
  <div> 
    <button onClick={_ => ReasonReactRouter.push("/greetings")}>{React.string("Atomic Greeting")} </button>
    <button onClick={_ => ReasonReactRouter.push("/blinking")}>{React.string("Blinking Greeting")} </button>
    <button onClick={_ => ReasonReactRouter.push("/reducer")}>{React.string("Reducer From ReactJS Docs")} </button>
    <button onClick={_ => ReasonReactRouter.push("/fetcheddog")}>{React.string("Fetched Dog Pictures")} </button>
    <button onClick={_ => ReasonReactRouter.push("/fetchedrandomdog")}>{React.string("1 random Dog")} </button>
  </div>;
  
};